typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern "C" void func_004D80A4(void*, u32, f32);
extern "C" u32 func_0051D27C(void*, u32, void*);
extern "C" void func_0065650C(void*, u32) __attribute__((weak));
extern "C" void* data_0070A89C;

struct S {
    u8 pad0[0x3dc];
    u8 m3dc[4];
    f32 m3e0;
    u8 pad1[0x3e8 - 0x3e4];
    u32 m3e8;
    u8 pad2[0x8ec - 0x3ec];
    u32 m8ec;
    f32 m8f0;
    void f();
};

void S::f() {
    func_004D80A4((u8*)this + 0x3dc, m3e8, m8f0);
    m3e0 = 0.0f;
    if (func_0051D27C((u8*)this + 0x3e8, m8ec, data_0070A89C) != 0) {
        func_0065650C((u8*)this + 0x8bc, 5);
    }
}
