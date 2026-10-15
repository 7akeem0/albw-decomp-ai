// 0x43DC90
extern "C" void func_0044A108(void*);
extern "C" void func_002BF358(void*);
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
    if (x != 0 && m148 == x) { func_0044A108(x); return; }
    void* y = m150;
    if (y != 0 && m148 == y) { func_002BF358(y); return; }
}
