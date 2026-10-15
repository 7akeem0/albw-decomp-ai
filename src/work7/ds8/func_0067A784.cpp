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

f32 target(Obj* o, f32 t) {
    const f32 tf = t;
    f32* tab;
    f32* p = tab = (f32*)o->m20;
    if (p[0] > tf) goto ret;
    {
        u16 cnt = o->mE;
        s32 off = (s32)cnt * 12 - 12;
        p = (f32*)((char*)tab + off);
        if (p[0] <= tf) goto ret;
        u32 k = (u32)(o->m1c * ((f32)(cnt - 1) * t));
        p = tab + k * 3;
        if (p[0] > tf) {
            do { p -= 3; } while (p[0] > tf);
        } else {
            do { p += 3; } while (!(p[0] > tf));
            p -= 3;
        }
    }
ret:
    return p[1];
}
