typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct BitFlag32 { u32 v; void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; } void set(u32 m) { change(m, true); } void reset(u32 m) { change(m, false); } };
struct Timer {
    u32 cur, max; f32 rate;
    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / (f32)n; else rate = 0.0f; cur = c; }
};
void func_004FABDC(void* self, s32 a, s32 b, s32 c);   // 0x4FABDC
void func_003C23B8(void* self, s32 a);                 // 0x3C23B8
struct C {
    char pad0[0x3dc];
    Vec3 m3dc;
    char pad1[0x59c - (0x3dc + 12)];
    BitFlag32 m59c;
    char pad2[0x8e0 - 0x5a0];
    char m8e0[4];
    char pad3[0x95c - 0x8e4];
    Timer mTimer;
    char pad4[0x978 - 0x968];
    f32 m978;
    void f();
};
void C::f() {
    m59c.reset(4);
    m59c.reset(0x80);
    m978 = 0.0f;
    m3dc = Vec3(0.0f, 0.0f, 0.0f);
    mTimer.start(0x1e);
    m59c.set(1);
    m59c.set(2);
    func_004FABDC(this, 0, -1, 0);
    func_003C23B8(m8e0, 0x32);
}
