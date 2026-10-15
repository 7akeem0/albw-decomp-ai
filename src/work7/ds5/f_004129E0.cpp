// 0x4129E0
extern "C" void func_001103B0(void*, void*, unsigned int);
struct Cls {
    char pad0[0x34];
    char m34[1];
    char pad1[0xb4 - 0x35];
    char mB4[1];
    char pad2[0xe8 - 0xb5];
    char mE8[1];
    char pad3[0x16c - 0xe9];
    unsigned int m16c;
    unsigned int m170;
    unsigned int m174;
    unsigned int m178;
    unsigned int m17c;
    unsigned int m180;
    unsigned int m184;
    unsigned int m188;
    unsigned char m18c;
    unsigned char m18d;
    int f(unsigned int a1, unsigned int a2);
};
int Cls::f(unsigned int a1, unsigned int a2) {
    m16c = 0;
    m170 = 0;
    m174 = 0;
    m184 = 0;
    m188 = 0;
    m18c = 0;
    m17c = a1;
    m180 = a2 >> 2;
    func_001103B0(this, (char*)this + 0x34, 0x20);
    func_001103B0((char*)this + 0xb4, (char*)this + 0xe8, 0x21);
    m18d = 1;
    return 1;
}
