typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Timer {
    u32 cur, max; f32 rate;
    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / (f32)n; else rate = 0.0f; cur = c; }
};
struct C {
    char pad0[0x508];
    s16 m508;
    char pad1[0xa68 - 0x50a];
    Timer mTimer;
    char pad2[0xab0 - (0xa68 + 12)];
    s32 mAB0;
    void f();
};
void func_004FABDC(C* self, s32 a, s32 b, s32 c);   // 0x4FABDC
f32 func_0058AC38(C* self);                          // 0x58AC38
void C::f() {
    mAB0 = m508;
    func_004FABDC(this, 0x15, -1, 0);
    Timer* t = &mTimer;
    u32 n = (u32)func_0058AC38(this);
    t->start(n);
}
