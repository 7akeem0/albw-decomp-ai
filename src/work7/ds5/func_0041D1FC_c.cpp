// 0x41D1FC variant C: call on the m1A0 pointer
extern "C" void func_00413FE0(void*, int);
struct Cls {
    char pad1[0x90];
    unsigned char m90;
    char pad2[0x130 - 0x91];
    unsigned char m130;
    char pad3[0x134 - 0x131];
    unsigned char m134;
    unsigned char m135;
    char pad4[0x1a0 - 0x136];
    void* m1A0;
    void f();
};
void Cls::f() {
    if (m135 != 0) return;
    if (m90 != 4) {
        void* p = m1A0;
        if (p != 0) {
            unsigned char v = m134;
            if (v <= 0) func_00413FE0(p, v == 0 ? 1 : v);
        }
        m90 = 4;
    }
    m130 = 0;
}
