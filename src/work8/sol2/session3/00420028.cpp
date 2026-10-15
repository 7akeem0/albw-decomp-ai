
extern "C" void* func_00401E14(void*, unsigned int, unsigned int, unsigned int);
extern "C" void func_00420074(void*, void*, unsigned int);
struct Cls {
    char pad[0x61c];
    unsigned int m61c;
    unsigned int m620;
    unsigned int m624;
    unsigned char m628;
    char pad2[0x62a - 0x629];
    unsigned char m62a;
    void f(unsigned int a1, unsigned int a2);
};
void Cls::f(unsigned int a1, unsigned int a2) {
    m620 = 0;
    m624 = 0;
    m61c = 0;
    m62a = 7;
    m628 = 1;
    void* r = func_00401E14(this, a1, 0, 1);
    func_00420074(this, r, a2);
}
