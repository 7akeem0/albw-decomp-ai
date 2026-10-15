typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern "C" void func_0060C57C(void*, u32, u32);
struct S {
    u8 pad0[0x984];
    u32 m984;
    u8 pad1[0x989 - 0x988];
    u8 m989;
    u8 pad2[0x98c - 0x98a];
    u32 m98c;
    u32 m990;
    void f();
};
void S::f() {
    u32 a = m98c;
    u32 b = m990;
    if (a < b) { a = a + 1; m98c = a; }
    if (a >= b) {
        u32 arg = m989;
        if (arg != 0) {
            if (arg == 1) arg = 5;
            else if (arg == 2) arg = 6;
            else if (arg == 3) arg = 8;
            else arg = m984;
        }
        func_0060C57C(this, arg, 0);
    }
}
