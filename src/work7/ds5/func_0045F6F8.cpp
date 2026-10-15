// 0x45F6F8
struct X { char pad[0x7e]; unsigned short m7e; };
struct Cls {
    char pad0[0xa8];
    X* mA8;
    char gap[0xb0 - 0xac];
    X* mB0;
    char pad1[0x11c - 0xb4];
    unsigned char m11c;
    char pad2[0x125 - 0x11d];
    signed char m125;
    signed char m126;
    signed char m127;
    void f(int a);
};
void Cls::f(int a) {
    signed char t = m125;
    if (a == 1) {
        if (mA8->m7e == 2) m125 = t - 1;
    } else if (a == 2) {
        if (mB0->m7e == 2) m125 = t + 1;
    }
    int v = m125;
    v = (v ^ (v >> 31)) - (v >> 31);
    if (v > 1) m127 = 1;
    m11c = 0;
    m126 = 0;
}
