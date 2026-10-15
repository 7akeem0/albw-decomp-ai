// 0x489460
extern "C" void func_001B6C04(void*);
extern "C" void func_0066F540(void*, int) ;

struct Cls {
    void f();
};
void Cls::f() {
    func_001B6C04(this);
    func_0066F540((char*)this + 0x44, 0);
}
