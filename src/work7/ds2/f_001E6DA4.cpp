typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct M0 { char pad0[0x44]; void* m44; };
extern M0* data_0070B728;
s32 func_0014E2A0(void* self, void* p, s32 a, s32 b, s32 c, s32 d);   // 0x14E2A0
__attribute__((weak)) void func_0065CE98(void* p, s32 a);              // 0x65CE98
struct C {
    char pad0[0x2c];
    u16 m2c;
    char pad1[0x788 - 0x2e];
    char m788[4];
    char pad2[0x7ac - 0x78c];
    void* m7ac;
    char pad3[0x7e0 - 0x7b0];
    char m7e0[4];
    void f();
};
void C::f() {
    void* q = m7e0;
    M0* g = data_0070B728;
    if (g->m44 && g->m44 == q)
        return;
    if (m2c == 0)
        return;
    if (func_0014E2A0(this, m7ac, 0, 0x100, 0, 0) == 0)
        func_0065CE98(m788, 0);
}
