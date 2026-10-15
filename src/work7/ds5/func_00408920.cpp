// 0x408920
extern "C" void func_001164C4(void*, int, int);
struct Cls {
    unsigned char m0, m1, m2, m3, m4;
    unsigned char m5, m6, m7, m8, m9, mA;
    Cls* f();
};
Cls* Cls::f() {
    m0 = 0;
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 0x7f;
    m7 = 0x40;
    m8 = 0;
    m9 = 0;
    mA = 0;
    func_001164C4((char*)this + 0xb, 2, -1);
    *(short*)((char*)this + 5) = 0;
    return this;
}
