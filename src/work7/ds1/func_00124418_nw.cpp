typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void func_0065650C(void*, u32) ;
extern "C" u32 func_00123DF8(void*);

struct S {
    u8 pad0[0x8bc];
    s32 m8bc;
    u8 pad1[0x8ec - 0x8c0];
    u32 m8ec;
    u8 pad2[0x93c - 0x8f0];
    u8 m93c;
    u8 pad3[0x940 - 0x93d];
    s32 m940;
    void f();
};

void S::f() {
    if (m8bc > 0x12c) func_0065650C((u8*)this + 0x8bc, 1);
    if (m940 > 6) {
        m940 = 0;
        if (func_00123DF8(this) == 0) {
            m8ec = (u32)(m93c << 30);
            func_0065650C((u8*)this + 0x8bc, 2);
            return;
        }
    }
    m940 = m940 + 1;
}
