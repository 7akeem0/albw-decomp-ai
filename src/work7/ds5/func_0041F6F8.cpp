// 0x41F6F8
extern "C" void func_0041F3C0(void*, unsigned int, void*, unsigned int, unsigned int);
struct Cls {
    char pad[0x33];
    unsigned char m33;
    unsigned char m34;
    void f(unsigned int a1, unsigned char a2);
};
void Cls::f(unsigned int a1, unsigned char a2) {
    unsigned char k = m34;
    func_0041F3C0(this, a1, (char*)this + k * 16 + 0x3f8, k + 0x40, m33 - k);
    m33 = a2;
    m34 = a2;
}
