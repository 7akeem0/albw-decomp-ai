#include "range.h"

// 0x56A58C / 0x56EE44
extern u8 data_00725790[];
extern u8 data_00725790[];
bool func_0056D40C(void*, void*, s32);
void* f56A58C(void* o) {
    u32 off;
    if (!func_0056D40C((u8*)o + 4, &off, 9)) return data_00725790;
    u8* p = (u8*)o + off;
    return p + *(u32*)(p + 4);
}
void* f56EE44(void* o) {
    u32 off;
    if (!func_0056D40C((u8*)o + 4, &off, 9)) return data_00725790;
    u8* p = (u8*)o + off;
    return p + *(u32*)(p + 4);
}

// 0x56CE2C
struct Out56CE { u32 a, b; u8* c; };
struct O56CE2C { char pad[0x3c]; void* m3C; };
void* func_0056B3E0(void*, u32);
bool f56CE2C(O56CE2C* o, u32 h, Out56CE* out) {
    u8* p = (u8*)func_0056B3E0(o->m3C, h);
    if (!p) return false;
    out->a = *(u32*)p;
    out->b = *(u32*)(p + 4);
    out->c = p + *(u32*)(p + 0xc);
    return true;
}

// 0x56D4D0
struct O56D4D0 { char pad[4]; f32 mA4; f32 m8; s32 mC; s32 m10; };
f32 f56D4D0(O56D4D0* o) {
    f32 v = o->m8;
    if (o->m10 < o->mC) v = o->mA4 + (v - o->mA4) * o->m10 / o->mC;
    return v;
}

// 0x57EAC0
void func_006003D8(u32, u32*);
u32 func_00561C34(void*, u32, u32);
u32 func_00601378(u32);
u32 f57EAC0(void* o) {
    u32 a;
    func_006003D8(0x208, &a);
    u32 b = func_00561C34((u8*)o + 0x68, a, 1);
    u32 d = (b - a) & ~3u;
    return func_00601378(d);
}

// 0x58208C
extern u8* data_00709DF8;
u32 func_0052A1D4(u32, u32, void*, u32);
u32 f58208C(u8* o, u32 a1, u32 a2) {
    u8* g = data_00709DF8;
    if (g[0x61]) return 0;
    return func_0052A1D4(*(u32*)(o + 0x40), a1, g + 0x18, a2);
}

// 0x57CB54
extern u8* data_0070B850;
bool func_00522828(void*, void*);
struct P57CB { char pad[0x16]; u16 m16; };
struct O57CB54 { char pad[0x14]; P57CB* m14; };
bool f57CB54(O57CB54* o) {
    if (func_00522828(data_0070B850, o)) return true;
    if (o->m14->m16 & 4) return true;
    return false;
}
