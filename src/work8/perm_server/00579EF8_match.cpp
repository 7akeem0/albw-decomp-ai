

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Elem {
    u8 pad0[0x35];
    u8 m35;
    u8 pad1[0x38 - 0x36];
};
struct Arr {
    u8 pad0[8];
    u32 num;
    Elem* base;
};
struct Owner {
    u8 pad0[0x1c];
    Arr* m1c;
    u8 pad1[0xd0 - 0x20];
    s8 m0d0;
    u8 pad2[0x1ba - 0xd1];
    s16 m1ba;
    u8 pad3[0x30c - 0x1bc];
    u8 m30c;
    bool f() const;
};
bool Owner::f() const {
    if (m0d0 == 1 || m0d0 == 3) return false;
    if (m30c != 0) return false;
    s16 i = m1ba; __schedule_barrier();
    Arr* a = m1c;
    if (i < 0) return true;
    __schedule_barrier(); Elem* e = a->base;
    if ((u32)i < a->num) e = &a->base[i];
    return 0 == e->m35;
}
