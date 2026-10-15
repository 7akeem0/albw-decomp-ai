typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;
typedef float f32;

extern "C" void func_004FABDC(void*, u32, s32, u32);

struct Vec3 {
    f32 x, y, z;
};

struct S {
    u8 pad0[0x4e4];
    f32 m4e4;
    f32 m4e8;
    f32 m4ec;
    u8 pad1[0x508 - 0x4f0];
    s16 m508;
    void f(u32 a1);
};

void S::f(u32 a1) {
    u8 k = (u8)a1;
    if (k == 0x1e || (u32)(k - 0xe) <= 3) {
        s16 v = m508;
        if (v > 0) {
            func_004FABDC(this, 0, -1, 0);
            Vec3* p = (Vec3*)((u8*)this + 0x4e4);
            p->x = 1.0f;
            p->y = 1.0f;
            p->z = 1.0f;
        }
    }
}
