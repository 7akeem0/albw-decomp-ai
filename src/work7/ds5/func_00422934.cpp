// 0x422934
extern "C" void func_00232478(void*);
extern "C" void func_0031BEC0(void*, int);

struct Cls {
    void f();
};
void Cls::f() {
    func_00232478(this);
    func_0031BEC0((char*)this + 0x44, 1);
}
