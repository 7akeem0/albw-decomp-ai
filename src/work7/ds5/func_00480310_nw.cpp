// 0x480310
extern "C" void func_001B6C04(void*);
extern "C" void func_0066EC64(void*, int) ;

struct Cls {
    void f();
};

void Cls::f() {
    func_001B6C04(this);
    func_0066EC64((char*)this + 0x78, 0);
}
