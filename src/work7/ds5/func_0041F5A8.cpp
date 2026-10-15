// 0x41F5A8
extern "C" void func_0041F3C0(void*, unsigned int, void*, unsigned int, unsigned int);
struct Cls {
    char pad[0x31];
    unsigned char m31;
    unsigned char m32;
    void f(unsigned int a1, unsigned char a2);
};
void Cls::f(unsigned int a1, unsigned char a2) {
    unsigned char k = m32;
    func_0041F3C0(this, a1, (char*)this + k * 16 + 0x1f8, k + 0x20, m31 - k);
    m31 = a2;
    m32 = a2;
}
