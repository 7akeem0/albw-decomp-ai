typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
typedef unsigned long long u64;

struct Vec3 { f32 x, y, z; };

extern "C" void func_0014EB3C(void*);
extern "C" void func_00115D70(Vec3*, const Vec3*, f32);
extern "C" void func_0058A7D4(void*);
extern "C" u32 func_00111A64();

inline u32 randRange(u32 max) {
    u32 r = func_00111A64();
    return (u32)(((u64)r * max) >> 32);
}

struct S {
    u8 pad0[0x374];
    Vec3 m374;
    u8 pad1[0x3dc - 0x380];
    Vec3 m3dc;
    u8 pad2[0x8f8 - 0x3e8];
    f32 m8f8;
    void f();
};

void S::f() {
    func_0014EB3C(this);
    Vec3* d = &m3dc;
    *d = m374;
    func_00115D70(d, d, 0.04f);
    func_0058A7D4(this);
    m8f8 = (f32)(s32)(randRange(0x28) + 0x19);
}
