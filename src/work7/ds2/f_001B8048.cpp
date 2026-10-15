#include "ds2.h"
struct Mat { f32 m[12]; };
struct Elem1B80 {
    char pad0[0x1c];
    Mat mat;              // +0x1c (0x30)
    u32 m4c;
    char pad1[0x6c - 0x50];
    u8 m6c;
    char pad2[0x70 - 0x6d];
};
struct Obj1B {
    char pad0[0x24];
    u32 m24;
    char pad1[0x104 - 0x28];
    Mat mat104;
    char pad2[0x16b - 0x134];
    u8 m16b;
};
struct This1B80 {
    char pad0[0x80];
    u32 m80;
    char pad1[0x88 - 0x84];
    Elem1B80* m88;
};

void func_001B8048(This1B80* t, Obj1B* a1, u32 idx) {
    Elem1B80* e = t->m88;
    if (idx < t->m80) e += idx;
    e->m4c = (u32)a1;
    e->m6c = 1;
    if (a1->m16b) {
        e->mat = *(Mat*)*(u32*)(a1->m24 + 0x14);
    } else {
        e->mat = a1->mat104;
    }
}
