// 0x440CE4
extern "C" void func_001B6C04(void*);
extern "C" void func_0066C748(void*, int) ;

struct Cls {
    void f();
};
void Cls::f() {
    func_001B6C04(this);
    func_0066C748((char*)this + 0x8c, 1);
}
