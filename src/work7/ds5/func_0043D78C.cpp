// 0x43D78C
extern "C" void func_004EC738(void*);
extern "C" void func_0014AE1C(void*, int);
extern "C" void func_0043CE2C(void*);
extern "C" void func_0043D1D4(void*);
extern "C" void func_0047AF3C(void*);
extern "C" void func_0066C424(void*, int) __attribute__((weak));
extern void* data_00711F50;
extern void* data_00712468;
struct Cls {
    char pad1[0x18];
    int m18;
    char pad2[0x158 - 0x1c];
    void* m158;
    void f();
};
void Cls::f() {
    func_004EC738(data_00711F50);
    func_0014AE1C(data_00712468, 1);
    m18 |= 0x40;
    func_0043CE2C(this);
    func_0043D1D4(this);
    func_0047AF3C(m158);
    func_0066C424((char*)this + 0x98, 0xa);
}
