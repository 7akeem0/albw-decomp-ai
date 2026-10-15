typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; };

extern "C" void func_00657580(void*, s32);
extern "C" void func_00115D70(Vec3*, const Vec3*, f32);

struct Sub460 {
    u8 pad[0x54];
    Vec3 v;
    u8 pad2[0xac - 0x60];
};

struct S {
    u8 pad0[0x30];
    s16 m30;
    u8 pad1[0x3dc - 0x32];
    Vec3 m3dc;
    u8 pad2[0x460 - 0x3e8];
    Sub460 sub;
    s32 m50c;
    void f();
};

void S::f() {
    if (m50c > 0) return;
    m50c = m30;
    func_00657580(&sub, 0);
    Vec3 t;
    Vec3& d = m3dc;
    func_00115D70(&t, &sub.v, 0.05f);
    d = t;
}
