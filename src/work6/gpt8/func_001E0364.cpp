#include "sndobj.h"
struct SeId {s32 v; };
bool SndObj::func_001E0364(s32 a, s32 id, ModelHolder* holder) {
    // Keep the first store on the incoming id and later uses on the local copy.
    // ARMCC then retains id in sb, info in r7, and flags in r8 (KB #235).
    SeId sid;
    sid.v = id;
    if (id == -1) return false;

    mE0 = id;
    if (mE4 == -1) mE4 = sid.v;
    if (holder == 0) holder = &mOwnHolder;
    mHolder = holder;
    u32 info = func_00588194(data_00711F50, sid.v);
    u32 lo = (info & 0xff);
    if (lo) { mE8 = lo; mEC = lo; }
    SeHandle* h = 0;
    if (!func_00588250(data_00711F50, sid.v)) {
        h = func_00379AEC(data_00711F50, sid.v);
        if (h) { func_00322274(h, this); }
        else {
            u32 f = func_00588174(data_00711F50, sid.v);
            if (f & 0x20) { h = func_00379B4C(data_00711F50, sid.v, this); if (h) func_003223B8(h, 4); }
            if (f & 0x80) { if (!h) h = func_00379B4C(data_00711F50, sid.v, this); if (h) func_003223B8(h, 8); }
            u32 x = ((info & 0x3f00)>>8);
            if (x) { if (!h) h = func_00379B4C(data_00711F50, sid.v, this); if (h) { func_003223B8(h, 1); h->m2c = x; } }
            u32 y = ((info & 0x7e0000)>>17);
            if (y) { if (!h) h = func_00379B4C(data_00711F50, sid.v, this); if (h) { func_003223B8(h, 2); h->m2e = y; } }
        }
        if (!h) func_004EB380(data_00711F50, this);
    }
    if (!h || !(h->m18 & 0xb)) func_00297948(data_00711F50, this);
    mFC = 0; m100 = 1.0f; m104 = 1.0f; m109 = 1; m10D = 0;
    if (m110 && holder != &mOwnHolder) { m30 = func_004090E0(a, holder, sid.v, 0); m10B = 1; }
    m114 = a; m118 = 1.0f; m11C = 0.0f; m120 = 0.0f; m124 = 0.0f; m128 = 0.0f; m12C = 0.0f; m130 = 0.0f; m134 = 1.0f;
    return !m10B || !m30;
}
