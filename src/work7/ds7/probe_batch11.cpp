#include "range.h"
struct E16 { u8 m0; u8 pad[0xf]; };
extern E16 data_007111A8[];
struct O53F768 { char pad[0x42]; s16 m42; char pad2[2]; void* m48; };

// 0x53F768
bool func_0055B76C(void*);
bool f53F768(O53F768* o) {
    if (data_007111A8[o->m42].m0 == 0xa) {
        void* p = o->m48;
        if (p && func_0055B76C(p)) return true;
    }
    return false;
}

// 0x540230
struct P540230 { char pad[0x168]; u32 m168; };
bool f540230(O53F768* o) {
    s16 v = o->m42;
    if (v == 0xa9) {
        P540230* p = (P540230*)o->m48;
        if (p && p->m168 == 0xb) return true;
    } else if (v == 0xa3) {
        return true;
    }
    return false;
}

// 0x549BD0
struct Y549 { char pad[0x2e0]; u32 m2E0; };
struct X549 { char pad[0x7c]; u8 m7C; };
bool f549BD0(X549* o, Y549* y) {
    if (y && (y->m2E0 & 8)) return true;
    if (o->m7C != 0 && y != 0 && (y->m2E0 & 1)) return true;
    return false;
}

// 0x54B3F0
extern void* data_007142C8;
bool func_0058DA24(void*);
struct X54B3F0 { char pad[0xee]; u16 mEE; };
bool f54B3F0(X54B3F0* o) {
    if (o->mEE != 0xffff) return false;
    void* p = data_007142C8;
    if (!p) return false;
    return func_0058DA24(p) != 0;
}

// 0x584488
extern void* data_00709DF8;
extern void* data_0070B728;
bool func_00584B94(void*, s32);
bool f584488() {
    s8 v = *(s8*)((u8*)data_00709DF8 + 0x18);
    if (v == 7 || v == 0x25) return true;
    return func_00584B94(data_0070B728, 0x386);
}
