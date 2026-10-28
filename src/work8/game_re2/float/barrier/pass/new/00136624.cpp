typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;

extern "C" void func_00588C14(void*, u32, u32);

struct S {
    u8 pad0[0x36];
    u16 m36;
    u16 m38;
    u8 pad1[0x2e0 - 0x3a];
    u32 m2e0;
    u8 pad2[0x478 - 0x2e4];
    u8 m478;
    void f();
template<class T0> void hlp0(T0 z) { if (m36 != 0) func_00588C14(this, z, 1);
    if (m38 != 0) func_00588C14(this, 1, 1);
    m2e0 |= 2u; }
};

void S::f() {
    u32 z = 0;
    m478 = z; 
    hlp0(z);
}
