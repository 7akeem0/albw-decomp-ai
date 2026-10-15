// 0x441298
extern "C" void func_0066F3FC(void*, int);
extern "C" void func_leaf(void*);
extern "C" void func_tail(void*);
struct Cls {
    void f();
};
void Cls::f() {
    func_0066F3FC((char*)this + 0xe4, 0);
    for (int i = 0; i < 4; i++) {
        char* p = (char*)this + 0x13c;
        if ((unsigned int)i < 4) p += i * 4;
        func_leaf(*(void**)p);
    }
    func_tail(this);
}
