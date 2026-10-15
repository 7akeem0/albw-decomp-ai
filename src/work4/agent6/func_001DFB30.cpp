#include "a6_snd.h"

// helpers inlined into 0x1DFB30. Their parameters explain the callee-saved constants of the original
// ('mov r7,#0' / 'mov r5,#0' = frames argument materialised at each call site, KB #89).
inline f32 SndObj_getVol(SndObj* o) {
    if (o->mHolder->isValid())
        return func_0056A138(o->mHolder->mModel);
    return o->m104;
}
inline void SndObj_applyInterp(SndObj* o, s32 i, f32 v, s32 frames) {
    if (o->mHolder->isValid()) {
        if (frames < 0)
            frames = 0;
        func_0010C7F8(o->mInterps[i], frames, v);
    }
}

// 0x1DFB30: start the sound (tail-called from 0x1DFE4C / 0x1DFA10) and push all parameters to it.
// Only remaining word: 'blne func_0040D5EC' which armlink inlined into 'vstrne s0,[r0,#0xd8]'
// (0x40D5EC is the 2-instruction setter; 0x1DF690 calls it as a normal tail call).
bool SndObj::func_001DFB30() {
    mFC = 0;
    if (!m109)
        return false;
    m108 = 1;
    m109 = 0;
    if (!m114)
        return false;
    if (m110) {
        mHolder->f40D80C();
        m100 = SndObj_getVol(this) * m100;   // vmul s0(vol), s1(m100)
        mHolder->SetVolume(m100, 0);
    } else {
        if (m34)
            m30 = func_004090A0(m114, mHolder, mE0, &m34);
        else
            m30 = func_004090A0(m114, mHolder, mE0, 0);
        if (m30)
            return false;
        {
            s32 frames = 0;
            f32 v = m100;
            f32 t = v;                         // orig 'vmov s1,s0; vcmpe s1,s1; blo'
            if (!m108 && t < t) {
            } else {
                if (m110)
                    v = v * v;
                m104 = v;
                if (mHolder->isValid())
                    mHolder->SetVolume(m104, frames);
            }
        }
        f32 p = m118;
        if (mHolder->isValid())
            mHolder->SetPitch(p);
    }
    SndObj_applyInterp(this, 0, m11C, 0);
    SndObj_applyInterp(this, 1, m120, 0);
    SndObj_applyInterp(this, 2, m124, 0);
    {
        f32 v = m128;
        if (mHolder->isValid())
            mHolder->f40D5EC(v);
    }
    SndObj_applyInterp(this, 3, m12C, 0);
    SndObj_applyInterp(this, 4, m130, 0);
    {
        f32 v = m134;
        if (mHolder->isValid()) {
            ModelRef ref(mHolder);
            if (ref.mPtr)
                func_00410260(ref.mPtr, v);
        }
    }
    mE8 = 0;
    mEC = 0;
    mF0 = 0;
    return true;
}
