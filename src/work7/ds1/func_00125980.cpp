typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
typedef unsigned long long u64;

extern "C" u32 func_0051D960(void*, u32);
extern "C" void func_004FC07C(void*, u32, s32, u32);
extern "C" u32 func_00111A64(void*);
extern "C" void* data_007124F0;

inline u32 randRange(void* r, u32 max) {
    u32 v = func_00111A64(r);
    return (u32)(((u64)v * max) >> 32);
}

struct S {
    u8 pad0[0x3dc];
    f32 m3dc;
    f32 m3e0;
    f32 m3e4;
    u8 pad1[0x8e8 - 0x3e8];
    u32 m8e8;
    void f();
};

void S::f() {
    u32 v = func_0051D960(this, 0);
    func_004FC07C(this, v, -1, 0);
    m3dc = 0.0f;
    m3e0 = 0.0f;
    m3e4 = 0.0f;
    void* rnd = (u8*)data_007124F0 + 0x660;
    m8e8 = randRange(rnd, 0x1e) + 0x5a;
}
