// 0x43DE30
extern "C" void func_0043CE2C(void*);
extern "C" void func_0043D1D4(void*);
extern "C" void func_0047AF3C(void*);
extern "C" void func_0066C424(void*, int) __attribute__((weak));
extern void* data_007142C8;
struct Cls {
    char pad1[0x70];
    unsigned char m70;
    char pad2[0x98 - 0x71];
    char m98;
    char pad3[0x158 - 0x99];
    void* m158;
    void f();
};
void Cls::f() {
    func_0043CE2C(this);
    func_0043D1D4(this);
    func_0047AF3C(m158);
    m70 = 1;
    unsigned short* p = (unsigned short*)((char*)data_007142C8 + 0x33e);
    *p &= ~8;
    func_0066C424((char*)this + 0x98, 8);
}
