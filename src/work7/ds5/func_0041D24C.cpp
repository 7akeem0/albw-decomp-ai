// 0x41D24C
extern "C" void func_00413FE0(void*, int);
struct Cls {
    char pad[0x90];
    unsigned char m90;
    char pad2[0x130 - 0x91];
    unsigned char m130;
    char pad3[0x134 - 0x131];
    unsigned char m134;
    char pad4[0x1a0 - 0x135];
    void* m1a0;
    void f();
};
void Cls::f() {
    if (m90 != 4) {
        if (m1a0 != 0) {
            if (m134 == 0) func_00413FE0(m1a0, 1);
        }
        m90 = 4;
    }
    m130 = 0;
}
