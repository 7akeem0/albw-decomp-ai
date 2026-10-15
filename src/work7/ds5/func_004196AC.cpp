// 0x4196AC
extern "C" unsigned int func_00110710(unsigned int, unsigned int);
struct Cls {
    unsigned int m0;
    unsigned int m4;
    unsigned int m8;
    unsigned int mc;
    unsigned int m10;
    unsigned char bits[1];
    void f(unsigned int a1);
};
void Cls::f(unsigned int a1) {
    unsigned int d = a1 - m0;
    unsigned int bit = func_00110710(d, m8);
    bits[bit >> 3] &= ~(1 << (bit & 7));
    m10 = m10 - 1;
}
