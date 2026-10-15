// 0x428AC0
extern "C" void* func_0010BAB4(unsigned int);
extern "C" void* func_0017A520(void*, unsigned int, unsigned int, unsigned int);
struct Cls {
    void* m0;
    unsigned int m4;
    float m8;
    float mC;
    unsigned char m10;
    Cls();
};
Cls::Cls() {
    void* p = func_0010BAB4(0x78);
    if (p) p = func_0017A520(p, 0x400, 0, 0);
    m0 = p;
    m4 = 0;
    m8 = 0.0f;
    mC = 0.0f;
    m10 = 0;
}
