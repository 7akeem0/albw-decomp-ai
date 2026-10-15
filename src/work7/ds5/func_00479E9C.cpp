// 0x479E9C
struct Sub { char pad[0x3c]; signed char m3c; };
struct Cls {
    char pad[0xd0];
    unsigned char m0d0;
    char pad2[0x1f4 - 0xd1];
    Sub* m1f4;
    Sub* m1f8;
    bool f();
};
bool Cls::f() {
    if (m0d0 == 2) return false;
    signed char a = m1f4->m3c;
    if ((unsigned int)(a - 1) <= 5) return false;
    signed char b = m1f8->m3c;
    return (unsigned int)(b - 1) > 5;
}
