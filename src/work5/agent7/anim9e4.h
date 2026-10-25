// agent7 round 5: object with three anim players (mC/m10/m14) at 0x1FE9E4..0x1FEA74
#include "albw_types.h"
struct Req5C {
    Req5C(u16 id, u32 arg, bool flag);   // 0x2C11E8, out-of-line, 0x5C bytes
    u32 m[0x5C / 4];
};
struct AnimElem {
    u32 m0, m4;
    f32 m8;        // frame
    u32 mC;
    f32 m10;       // rate
    f32 m14;       // end frame
    u32 m18;
    u8 m1c;        // loop?
    u8 pad1d[0x26 - 0x1d];
    u8 m26;        // dirty
    void setFrame(f32 f) { if (m8 != f) { m8 = f; m26 = 1; } }
    bool isEnd() const {
        bool end;
        if (m10 >= 0.0f) end = m8 == m14;
        else end = m8 <= 0.0f;
        return end;
    }
};
struct AnimArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
void func_0016898C(AnimArr* t, const Req5C& r);
struct Obj9E4 {
    virtual void vf0();
    AnimArr* m4;
    u32 m8;
    AnimArr* mC;
    AnimArr* m10;
    AnimArr* m14;
    s32 m18;
    u32 m1c;
    s32 m20;
    u32 pad[(0x30 - 0x24) / 4];
    u8 m30, m31, m32;
#ifdef OBJ9E4_EXTRA
    OBJ9E4_EXTRA
#endif
};
