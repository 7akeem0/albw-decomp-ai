typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;

extern "C" s32 func_0051D2F4(s32* cur, s32 target, float rate, s32 a, s32 b);
extern "C" u32 func_0058A8F0(void* self);
extern "C" void func_00129EE4(void* self);

struct S {
    u8 m0[0x904];
    s32 m904;
    u8 m908[0x930 - 0x908];
    s32 m930;
    void f();
};

void S::f() {
    s32* cur = &m904;
    s32 r = func_0051D2F4(cur, m930, 0.4f, 0xb60b60, 0x38e38e3);
    if (func_0058A8F0(this) & r) func_00129EE4(this);
}
