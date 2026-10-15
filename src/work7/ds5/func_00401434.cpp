// 0x401434
struct Cls {
    char pad1[0x5f8];
    unsigned char m5F8;
    unsigned char m5F9;
    void f(unsigned flags);
};
void Cls::f(unsigned f) {
    unsigned char a = 0;
    unsigned char b = 0;
    if (f & 2) a = 0x80;
    if (f != 0) {
        if ((f & 0x40000000) == 0) b = 8;
    }
    if (f & 4) a |= 8;
    if (f & 8) a |= 4;
    if (f & 0x10) a |= 0x20;
    if (f & 0x20) a |= 0x10;
    if (f & 0x10000) a |= 0x40;
    if (f & 0x20000) a |= 2;
    if (f & 0x40000) a |= 1;
    m5F8 = a;
    m5F9 = b;
}
