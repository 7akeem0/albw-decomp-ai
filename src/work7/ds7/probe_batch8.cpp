#include "range.h"

// 0x56CA3C
struct O56CA3C { void* m0; char pad[8]; u8 mC; };
u32 func_0056ACF4(void*);
bool f56CA3C(O56CA3C* o) {
    if (!o->mC) return false;
    u8* p = (u8*)o->m0;
    u32 idx = func_0056ACF4(p);
    return 0x54415743 == *(u32*)(p + idx);
}

// 0x56CADC
struct O56CADC { char pad[0x38]; void* m38; void* m3C; };
s32 func_0056B1A0(void*);
s32 func_0056B62C(void*, s32);
s32 f56CADC(O56CADC* o) {
    if (!o->m38) return 0;
    s32 idx = func_0056B1A0(o->m3C);
    if (idx == -1) return 0;
    return func_0056B62C(o->m38, idx);
}

// 0x56D128
struct Out56D128 { u32 a, b; u8 c; };
struct O56D128 { char pad[0x3c]; void* m3C; };
void* func_0056B41C(void*, u32);
u32 func_0056B658(void*);
bool f56D128(O56D128* o, u32 h, Out56D128* out) {
    u8* p = (u8*)func_0056B41C(o->m3C, h);
    if (!p) return false;
    out->a = *(u32*)p;
    out->b = func_0056B658(p);
    out->c = p[4];
    return true;
}

// 0x58D7CC / 0x58DABC / 0x58DEB8 (actor state helpers on m58/m54/m70/m74)
struct P58X { char pad[0xd]; u8 m0D; u8 m0E; };
struct O58D7CC { char pad[0x54]; P58X* m54; u16 m58; };
bool f58D7CC(O58D7CC* o) {
    if (o->m58 != 3) return true;
    if (!o->m54) return false;
    return o->m54->m0D == 3 && o->m54->m0E == 3;
}
struct O58DABC { char pad[0x54]; P58X* m54; s16 m58; };
bool f58DABC(O58DABC* o) {
    if (o->m58 != 4 && o->m58 != 5) return true;
    if (!o->m54) return true;
    if (o->m54->m0D != 0 || o->m54->m0E != 0) return false;
    return true;
}
struct O58DEB8 { char pad[0x70]; P58X* m70; s16 m74; };
bool f58DEB8(O58DEB8* o) {
    return o->m70 && (o->m70->m0D != 0 || o->m70->m0E != 0) && (o->m74 == 0 || o->m74 == 1);
}
