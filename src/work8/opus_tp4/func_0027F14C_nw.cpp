#include "../../work7/ds2/ds2.h"
struct V3 { f32 x, y, z; };
struct AnimElem {
    u32 m0, m4;
    f32 m8;
    u32 mC;
    f32 m10;
    f32 m14;
    u32 m18;
    u8 m1c;
    u8 pad[0x26 - 0x1d];
    u8 m26;
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
struct This;
void func_001E5B90(This*, u32, V3, f32, f32);
inline void call5(This* t, const V3& p){ func_001E5B90(t, 1, p, 1.2f, 0.015f); }
void func_00660F70(void*, u32) ;
struct This {
    char pad0[0x3d0];
    V3 m3d0;
    char pad1[0x4b4 - 0x3dc];
    AnimArr* m4b4;
    char pad2[4];
    char m4bc[1];
};

void func_0027F14C(This* t) {
    AnimElem& e = *t->m4b4->mData;
    if (!e.m1c && e.isEnd()) {
        call5(t, t->m3d0);
        func_00660F70(t->m4bc, 0);
    }
}
