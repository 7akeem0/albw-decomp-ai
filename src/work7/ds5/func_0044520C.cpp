// 0x44520C
extern "C" void func_001B6B38(void*);
extern "C" void func_001B6DE0(void*);
struct Cls {
    void f();
};
void Cls::f() {
    for (int i = 0; i < 12; i++) {
        char* p = (char*)this + 0xc4;
        if ((unsigned int)i < 12) p += i * 84;
        func_001B6B38(p);
    }
    func_001B6DE0(this);
}
