// 0x46D7EC
extern "C" void func_00232468(void*);
extern "C" void func_0066E1C0(void*, int) ;

struct Cls {
    void f();
};

void Cls::f() {
    func_00232468(this);
    func_0066E1C0((char*)this + 0x74, 0);
}
