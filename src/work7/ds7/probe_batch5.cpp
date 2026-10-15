#include "range.h"

// 0x560E74 / 0x560F64 / 0x560FA0 / 0x561184
struct Res560 { u32 v; u8 t; };
bool func_00560FDC(void*, Res560*);
bool func_005611C0(void*, Res560*);
bool f560E74(void* a, u32* out) {
    Res560 r;
    if (!func_00560FDC(a, &r)) return false;
    if (r.t != 0xd1) return false;
    *out = r.v;
    return true;
}
bool f560F64(void* a, u32* out) {
    Res560 r;
    if (!func_00560FDC(a, &r)) return false;
    if (r.t != 0xd2) return false;
    *out = r.v;
    return true;
}
bool f560FA0(void* a, u32* out) {
    Res560 r;
    if (!func_005611C0(a, &r)) return false;
    if (r.t != 0xd1) return false;
    *out = r.v;
    return true;
}
bool f561184(void* a, u32* out) {
    Res560 r;
    if (!func_005611C0(a, &r)) return false;
    if (r.t != 0xd2) return false;
    *out = r.v;
    return true;
}

// 0x56427C
bool f56427C(u8* p) {
    for (s32 i = 0; i < 8; i += 2) {
        if (p[i]) return false;
        if (p[i+1]) return false;
    }
    return true;
}

// 0x56463C
struct O56463C { char pad[0x1c]; u32 m1C; };
u32 f56463C(O56463C* o, u32 a, u32 b, u32 c) {
    if (o->m1C == 0) return 0xd820ebf8;
    if (a == 0 && b == 0) return 0xe0e0ebf6;
    if (c > 0x10) return 0xe0e0ebec;
    return 0;
}

// 0x56A2F0
struct O56A2F0 { char pad[0x14]; u32 m14; };
u8* f56A2F0(O56A2F0* o, u32 idx) {
    u8* base = (u8*)o + o->m14;
    if (*(u32*)base <= idx) return 0;
    u8* e = base + idx * 8;
    if (*(u16*)(e + 4) == 0x4902) return base + *(u32*)(e + 8);
    return 0;
}
