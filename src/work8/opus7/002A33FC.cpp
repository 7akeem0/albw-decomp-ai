typedef unsigned char u8; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; };
extern "C" const Vec3 bss_007A9260;
extern "C" s32 data_0070A95C;
struct En;
void func_002A27C4(En* e, s32 v);
s32 func_0058AB74(En* e);
Vec3* func_00520FC0(En* e);
void func_00115C70(Vec3* out, const Vec3* a, const Vec3* b);
s32 func_0068C690(const Vec3* v);
void func_0051D2F4(s32* cur, s32 tgt, f32 rate, s32 a, s32 b);
bool func_0058A8F0(En* e);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
f32 func_0058AC38(En* e);
bool func_0058ACC8(En* e, f32 v);
struct SM9E0 { void changeState(s32 s) __attribute__((weak)); };
struct BitFlag32 { u32 v; void set(u32 m) { v |= m; } void reset(u32 m) { v &= ~m; } };
struct En {
    u8 pad[0x3d0]; Vec3 m3d0; u8 pad3dc[0x3e8 - 0x3dc]; s32 m3e8; u8 pad3ec[0x59c - 0x3ec]; BitFlag32 m59c;
    u8 pad5a0[0x9e0 - 0x5a0]; SM9E0 m9e0; u8 pad9e1[0xb91 - 0x9e1]; u8 mb91;
    void f();
};
void En::f() {
    func_002A27C4(this, 1);
    if (func_0058AB74(this) == 0x16) {
        Vec3 d = bss_007A9260;
        { Vec3* pd = &d; func_00115C70(pd, func_00520FC0(this), &m3d0); }
        func_0051D2F4(&m3e8, func_0068C690(&d), 0.1f, 0, data_0070A95C);
        if (func_0058A8F0(this)) {
            func_004FC07C(this, 0x17, -1, 0);
            m59c.set(8);
        }
    } else if (func_0058AB74(this) == 0x17) {
        if (func_0058ACC8(this, func_0058AC38(this) - 1.0f)) { u8 c = mb91 - 1; mb91 = c; if (c == 0) {
            func_004FC07C(this, 0x18, -1, 0);
            m59c.reset(8);
        } }
    } else if (func_0058A8F0(this)) {
        m9e0.changeState(0xb);
    }
}
