// 0x4412DC
extern "C" void func_0012C790(void*);
extern "C" void func_001B6B38(void*);
extern "C" void func_0066C748(void*, int);
extern "C" void func_00166620(void*, void*);
extern "C" void func_001B6DE0(void*);
extern void* data_0070B850;
struct Cls {
    char pad1[0x88];
    unsigned char m88;
    char pad2[0xDC - 0x89];
    void* mDC;
    void f();
};
void Cls::f() {
    if (mDC != 0) {
        func_0012C790(mDC);
        func_001B6B38(mDC);
    }
    m88 = 0;
    func_0066C748((char*)this + 0x8c, 0);
    func_00166620(data_0070B850, this);
    func_001B6DE0(this);
}
