// 0x4855EC
extern "C" void func_00232468(void*);
extern "C" void func_0016656C(void*, void*);
extern "C" void func_00166C00(void*, int);
extern "C" void func_0066F2B8(void*, int) __attribute__((weak));
extern void* data_0070B850;
struct Cls { void f(); };
void Cls::f() {
    func_00232468(this);
    func_0016656C(data_0070B850, this);
    func_00166C00(data_0070B850, 1);
    func_0066F2B8((char*)this + 0x8c, 0);
}
