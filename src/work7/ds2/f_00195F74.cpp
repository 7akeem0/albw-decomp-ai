typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct C {
    char pad0[0x24];
    u32 m24;
    char pad28[0x3e8 - 0x28];
    u32 m3e8;
    void f();
};
void func_00196330(C* self, u32 v);                 // 0x196330
void func_0014FAFC(C* self, u32 v, f32 x);          // 0x14FAFC
void C::f() {
    func_00196330(this, 3);
    m3e8 = m24 + 0x80000000;
    func_0014FAFC(this, m3e8, 0.16f);
}
