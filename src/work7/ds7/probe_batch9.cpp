#include "range.h"
struct P58X { char pad[0xd]; u8 m0D; u8 m0E; };

// 0x58D724
struct P58D724 { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x7c-0xf]; u8 m7C; };
struct O58D724 { char pad[0x54]; P58D724* m54; u16 m58; };
bool f58D724(O58D724* o) {
    if (o->m58 != 3) return false;
    if (!o->m54) return false;
    if (o->m54->m0D == 0 && o->m54->m0E == 0) return false;
    return o->m54->m7C == 0;
}

// 0x58DA7C
struct O58DA7C { char pad[0x54]; P58X* m54; s16 m58; };
bool f58DA7C(O58DA7C* o) {
    if (o->m58 == 4 || o->m58 == 5) {
        if (!o->m54) return false;
        return o->m54->m0D == 3 && o->m54->m0E == 3;
    }
    return true;
}

// 0x58D90C
struct P58D90C { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x78-0xf]; void* m78; };
struct Q58D90C { char pad[0x14c]; s32 m14C; };
struct O58D90C { char pad[0x54]; P58D90C* m54; u16 m58; };
bool f58D90C(O58D90C* o) {
    if (o->m58 != 3) return false;
    if (!o->m54) return false;
    if (o->m54->m0D == 0 && o->m54->m0E == 0) return false;
    return ((Q58D90C*)o->m54->m78)->m14C != 2;
}

// 0x5742C4
struct O5742C4 { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x78-0xf]; u8 m78; char pad3[0xd8-0x79]; u8 mD8; };
bool f5742C4(O5742C4* o) {
    if (o->mD8 == 1) return o->m0D == 0 && o->m0E == 0;
    return o->m78 == 2;
}

// 0x5737B8
struct O5737B8 { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x78-0xf]; s8 m78; char pad3[0x158-0x79]; u32 m158; };
bool func_00579F5C(u32);
bool f5737B8(O5737B8* o) {
    if (o->m0D == 3 && o->m0E == 3 && (o->m78 == 4 || o->m78 == 5))
        return func_00579F5C(o->m158) != 0;
    return false;
}
