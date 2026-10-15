// 0x41DB94
extern "C" void func_0041D908(void*);
extern "C" void func_003E67D8(void*, int);
extern "C" void func_003E6D50(void*);
struct Cls {
    void* m0;
    void f();
};
void Cls::f() {
    if (m0 == 0) return;
    func_0041D908(this);
    func_003E67D8(m0, 3);
    func_003E6D50(m0);
    m0 = 0;
}
