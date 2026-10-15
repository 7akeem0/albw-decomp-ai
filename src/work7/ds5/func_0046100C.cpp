// 0x46100C
extern "C" int func_00556A2C(void*);
extern "C" void func_004610A0(void*, int);
extern void* data_0070FB60;
struct Cls {
    char pad[0x78];
    int m78;
    void f();
};
void Cls::f() {
    int v = func_00556A2C(data_0070FB60);
    if (m78 != v) {
        func_004610A0(this, 1);
        m78 = v;
    }
}
