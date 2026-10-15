typedef unsigned int u32;
typedef float f32;

struct Sub24 { char p0[4]; u32 m4; };
struct Obj {
    char p0[0x1c];
    u32 m1c;
    char p1[0x24 - 0x20];
    Sub24* m24;
    char p2[0x3c - 0x28];
    f32 m3c;
    u32 m40;
};

u32 func_00532C78(u32 a);

extern "C" bool func_0055BF20(Obj* self) {
    u32 m40 = self->m40;
    u32 iv = (u32)self->m3c;
    if (iv != m40) return 0;
    u32 arg = (self->m1c > 1) ? self->m24->m4 : 0;
    u32 r = func_00532C78(arg);
    if (r == 0) return 1;
    return 0;
}
