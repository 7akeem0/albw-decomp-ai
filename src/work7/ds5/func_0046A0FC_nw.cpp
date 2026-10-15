// 0x46A0FC
extern "C" void func_001B6C04(void*);
extern "C" void func_0066DDF4(void*, int) ;

struct Cls {
    void f();
};
void Cls::f() {
    func_001B6C04(this);
    func_0066DDF4((char*)this + 0x50, 0);
}
