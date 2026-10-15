// 0x47202C
extern "C" void func_00166620(void*, void*);
extern "C" void func_00166C00(void*, int);
extern "C" void func_001B6DE0(void*);
extern "C" void func_004B96A0(void*, void*);
extern void* data_0070B850;
struct Cls {
    char pad1[0x14];
    void* m14;
    char pad2[0xfc - 0x18];
    void* mFC;
    void* m100;
    void* m104;
    void f();
};
void Cls::f() {
    func_00166620(data_0070B850, this);
    func_00166C00(data_0070B850, 1);
    func_001B6DE0(this);
    func_004B96A0(this, m14);
    func_004B96A0(this, mFC);
    func_004B96A0(this, m100);
    func_004B96A0(this, m104);
}
