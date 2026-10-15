#include "ds2.h"
struct AnimElem {
    u32 m0, m4;
    f32 m8;
    u32 mC;
    f32 m10, m14;
    u32 m18;
    u8 m1c;
    u8 pad[0x26 - 0x1d];
    u8 m26;
    void setFrame(f32 f) { if (m8 != f) { m8 = f; m26 = 1; } }
};
struct AnimArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
struct Obj15A { char pad[0x1c]; AnimArr* m1c; };
struct This15A { char pad0[0x960]; Obj15A* m960; };
void func_004FABDC(void*, u32, s32, u32);
void func_004FB0A4(void*, f32);
void func_002227F4(void*, u32, s32);

void func_0015AD54(This15A* t, u32 a1, s32 a2, f32 v) {
    func_004FABDC(t, a1, a2 < 0 ? 10 : a2, 0);
    func_004FB0A4(t, v);
    if (t->m960) {
        func_002227F4(t->m960, a1, a2);
        (*t->m960->m1c)[0].setFrame(v);
    }
}
