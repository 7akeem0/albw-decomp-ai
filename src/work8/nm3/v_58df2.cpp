#include "range.h"
struct P58X { char pad[0xd]; u8 m0D; u8 m0E; };

// 0x58D6D0
struct PA58 { char pad[0x74]; u8 m74; };
struct O58D6D0 { char pad[0x54]; P58X* m54; u16 m58; char pad2[0x130-0x5a]; PA58* m130; };
bool f58D6D0(O58D6D0* o) {
    PA58* p = o->m130;
    if (!p) return true;
    if (p->m74 & 4) return false;
    P58X* q = o->m54;
    if (!q) return true;
    if (q->m0D == 0 && q->m0E == 0) return true;
    if (o->m58 == 0) return false;
    return true;
}

// 0x58DFF0
struct PB58 { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x9c-0xf]; u8 m9C; char pad3[0x80]; };
struct O58DFF0 { char pad[0xf0]; PB58* mF0; };
bool func_00532C78(void*);
bool f58DFF0(O58DFF0* o) {
    PB58* p = o->mF0;
    return (p->m0D == 3 && p->m0E == 3) && (p->m9C != 0xe || func_00532C78((u8*)p + 0x74) || func_00532C78((u8*)p + 0x80) != 0);
}

// 0x58DA7C (explicit else)
struct O58DA7C { char pad[0x54]; P58X* m54; s16 m58; };
bool f58DA7Cb(O58DA7C* o) {
    if (o->m58 == 4 || o->m58 == 5) {
        if (!o->m54) return false;
        return o->m54->m0D == 3 && o->m54->m0E == 3;
    } else {
        return true;
    }
}

// 0x58D724 (named pointer local)
struct P58D724 { char pad[0xd]; u8 m0D; u8 m0E; char pad2[0x7c-0xf]; u8 m7C; };
struct O58D724 { char pad[0x54]; P58D724* m54; u16 m58; };
bool f58D724b(O58D724* o) {
    if (o->m58 != 3) return false;
    P58D724* p = o->m54;
    if (!p) return false;
    if (p->m0D == 0 && p->m0E == 0) return false;
    return p->m7C == 0;
}
