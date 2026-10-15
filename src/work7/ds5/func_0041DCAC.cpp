// 0x41DCAC
extern "C" int func_003E6B78(void*, void*);
extern "C" int func_0041D87C(void*);
extern "C" void func_003E6AD4(void*, int);
struct Cls {
    void* m0;
    int m4;
    int f();
};
int Cls::f() {
    if (func_003E6B78(m0, (void*)m4) == 0) return -1;
    if (func_0041D87C(this) != 0) return m4 - 1;
    func_003E6AD4(m0, 0);
    return -1;
}
