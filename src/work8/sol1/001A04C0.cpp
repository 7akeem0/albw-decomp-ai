typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Timer {
    u32 cur, max; f32 rate;
    void start(u32 n, const u32& c = 0) { max = n; if (n) rate = 1.0f / (f32)n; else rate = 0.0f; cur = c; }
};
struct Sub1200 { char pad[0x25]; u8 m25; };
extern Vec3 bss_0073A3FC;
void func_00115C54(Vec3* out, const Vec3* a, const Vec3* b);
static void sol1ctx_0(Vec3* a0,const Vec3* const& a1,const Vec3* const& a2){func_00115C54(a0,a1,a2);}

void func_0036BFD0(void* p, s32 a, s32 b);
struct C {
    char pad0[0x3d0];
    Vec3 m3d0;
    char pad1[0x8c8 - (0x3d0 + 12)];
    char m8c8[4];
    char pad2[0x8f0 - 0x8cc];
    void* m8f0;
    char pad3[0x9bc - 0x8f4];
    u8 m9bc;
    char pad4[0x11a8 - 0x9bd];
    Vec3 m11a8;
    char pad5[0x11d4 - (0x11a8 + 12)];
    Timer mTimer2;
    char pad6[0x1200 - (0x11d4 + 12)];
    Sub1200 m1200;
    void f();
};
void C::f() {
    Sub1200* s = &m1200;
    if (s->m25 != 0)
        return;
    sol1ctx_0(&m11a8, &m3d0, &bss_0073A3FC);
    m9bc = 2;
    m8f0 = &m11a8;
    func_0036BFD0(m8c8, -1, -1);
    mTimer2.start(3);
}
