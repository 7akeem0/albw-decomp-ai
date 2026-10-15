// 0x455B5C
extern "C" void func_0066D2AC(void*, int);
extern "C" void func_0012C718(void*);
extern "C" void func_001B6B38(void*);
struct Cls {
    char pad[0xd];
    signed char m0d;
    unsigned char m0e;
    void f();
};
void Cls::f() {
    func_0066D2AC((char*)this + 0x68, 0);
    signed char s = m0d;
    if (s == 1 || (s == 3 && m0e == 3)) {
        func_0012C718(this);
        func_001B6B38(this);
    }
}
