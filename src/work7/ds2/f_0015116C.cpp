#include "ds2.h"
struct Sub1511 {
    char pad0[0x74];
    f32 m74;                 // 0x74
    f32 m78;                 // 0x78
    f32 m7c;                 // 0x7c
    char pad1[0x164 - 0x80];
    u32 m164;                // 0x164
};
void func_004D8AEC(void*, u32, void*);
void func_004CEAF0(void*);
void func_001512B4(u32, void*);
void func_001511F0(u32);
struct This1511 {
    char pad0[0x3d0];
    char m3d0[1];            // 0x3d0
    char pad1[0x3e8 - 0x3d1];
    u32 m3e8;                // 0x3e8
    char pad2[0x4f4 - 0x3ec];
    Sub1511* m4f4;           // 0x4f4
    char pad3[0x54c - 0x4f8];
    u32 m54c;                // 0x54c
    char pad4[0x564 - 0x550];
    f32 m564;                // 0x564
    char pad5[0x59c - 0x568];
    f32 m59c;                // 0x59c
};

void func_0015116C(This1511* t) {
    Sub1511* s = t->m4f4;
    s->m164 = s->m164 | 0x40000000;
    func_004D8AEC((char*)s + 0x80, t->m3e8, (char*)t + 0x3d0);
    f32 v = t->m564 * t->m59c;
    Sub1511* s2 = t->m4f4;
    s2->m164 = s2->m164 | 0x40000000;
    s2->m74 = v;
    s2->m78 = v;
    s2->m7c = v;
    func_004CEAF0(t->m4f4);
    func_001512B4(t->m54c, (char*)t + 0x4d0);
    func_001511F0(t->m54c);
}
