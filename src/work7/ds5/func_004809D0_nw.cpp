// 0x4809D0
extern "C" void func_00232468(void*);
extern "C" void func_0066EDA8(void*, int) ;

struct Cls {
    void f();
};
void Cls::f() {
    func_00232468(this);
    func_0066EDA8((char*)this + 0x74, 0);
}
