// 0x43DE84
extern "C" void func_0044AD64(void*);
extern "C" void func_0046769C(void*);
struct Cls {
    char pad[0x148];
    void* m148;
    void* m14c;
    void* m150;
    void* m154;
    void f();
};
void Cls::f() {
    void* x = m154;
    if (x != 0 && m148 == x) { func_0044AD64(x); return; }
    void* y = m150;
    if (y != 0 && m148 == y) { func_0046769C(y); return; }
}
