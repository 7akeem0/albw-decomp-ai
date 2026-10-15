typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Inner430 {
char pad0[0x61];
u8 m61;
};
struct Sub4e4 {
u32 m0;
u32 m4;
f32 m8;
};
struct Obj {
char pad0[0x430];
Inner430* m430;
};

void func_0039DC1C(Obj* self, u32 flag, u32 v) {
    Inner430* in = self->m430;
    if (flag || flag) { if (v) { (*in).m61 = (flag != 0) ? 1 : 0; } else { in->m61 = (flag != 0) ? 1 : 0; } } else { in->m61 = (flag != 0) ? 1 : 0; }
    if (flag != 0) {
        Sub4e4* s = (Sub4e4*)((char*)self + 0x4e4);
        u32 zero = 0;
        s->m4 = v;
        if (v == 0) s->m8 = 0.0f;
        else s->m8 = 1.0f / (f32)v;
        s->m0 = zero;
    }
    *(u32*)((char*)self + 0x49c) = flag;
}
