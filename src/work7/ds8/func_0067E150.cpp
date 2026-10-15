typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef float f32;

struct Obj {
    u8 pad0[0xe];
    u16 mE;      // 0xe
    u8 pad10[0x18 - 0x10];
    f32 m18;     // 0x18
    f32 m1c;     // 0x1c
    void* m20;   // 0x20
};

void* target(Obj* o, f32 t) {
    f32 d = o->m18;
    u8* tab = (u8*)o->m20;
    u32 idx = (u32)(t / d);
    if (tab[0] > idx) return tab;
    s32 off = (s32)o->mE * 6 - 6;
    u8* p = tab + off;
    if (idx >= p[0]) return p;
    u32 k = (u32)(o->m1c * (f32)(o->mE - 1) * t);
    p = tab + k * 6;
    if (idx < p[0]) {
        do { p -= 6; } while (p[0] > idx);
        return p;
    }
    do { p += 6; } while (p[0] <= idx);
    return p - 6;
}
