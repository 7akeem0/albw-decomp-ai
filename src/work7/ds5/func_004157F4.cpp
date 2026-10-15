// 0x4157F4
extern "C" void func_00415EB4(void*);
struct Cls {
    char pad[0x3c];
    unsigned int m3c;
    int m40;
    unsigned int m44;
    char pad2[0x4c - 0x48];
    unsigned int m4c;
    unsigned int m50;
    unsigned char m54;
    unsigned char m55;
    char pad3[0xa98 - 0x56];
    unsigned char m0a98;
    char pad4[0xc2c - 0xa99];
    unsigned int m0c2c;
    unsigned int m0c30;
    void f();
};
void Cls::f() {
    func_00415EB4(this);
    m3c = 0;
    m40 = -1;
    m44 = 0;
    m4c = 0;
    m50 = 0;
    m54 = 0;
    m55 = 0;
    m0a98 = 3;
    m0c2c = 0;
    m0c30 = 0;
}
