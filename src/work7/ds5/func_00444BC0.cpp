// 0x444BC0
extern "C" void func_001B6D40(void*);
extern "C" void func_0012C790(void*);
struct Cls {
    char pad[0xc4];
    void f();
};
void Cls::f() {
    func_001B6D40(this);
    for (int i = 0; i < 12; i++) {
        char* p = (char*)this + 0xc4;
        if ((unsigned int)i < 12) p += i * 84;
        func_0012C790(p);
    }
}
