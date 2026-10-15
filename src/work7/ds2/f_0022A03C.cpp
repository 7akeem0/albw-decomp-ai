#include "ds2.h"
struct AnimElem22 { u32 m0, m4; f32 m8; u32 mC; f32 m10; f32 m14; };
struct Arr22 {
    char pad[0xc];
    s32 mNum;
    s32 mMax;
    AnimElem22* mData;
    AnimElem22& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
void func_004FABDC(void*, u32, s32, u32);
void func_0036C42C(void*);
struct This22A {
    char pad0[0x3dc];
    f32 m3dc, m3e0, m3e4;     // 0x3dc Vec3
    char pad1[0x59c - 0x3e8];
    BitFlag32 m59c;           // 0x59c
    char pad2[0x968 - 0x5a0];
    char m968[1];             // 0x968
    char pad3[0x990 - 0x969];
    u32 m990;                 // 0x990
    char pad4[0xa5c - 0x994];
    u8 mA5c;                  // 0xa5c
    char pad5[0xaa8 - 0xa5d];
    u32 mAa8;                 // 0xaa8
    char pad6[0xce8 - 0xaac];
    char mCe8[1];             // 0xce8
    char pad7[0xd08 - 0xce9];
    u8 mD08;                  // 0xd08
};

void func_0022A03C(This22A* t) {
    t->m3dc = 0.0f;
    t->m3e0 = 0.0f;
    t->m3e4 = 0.0f;
    func_004FABDC(t, 0xb, -1, 0);
    Arr22* a = (Arr22*)t->mAa8;
    (*a)[0].m10 = 1.0f;
    t->m59c.reset(0xc);
    t->m59c.reset(0x80);
    t->mA5c = 2;
    t->m990 = (u32)((char*)t + 0xce8);
    func_0036C42C((char*)t + 0x968);
    t->mD08 = 0;
}
