// 0x45A054
extern "C" void func_004576CC(void*, int, int);
extern "C" void func_00166C00(void*, int);
extern void* data_0070B850;
struct Cls {
    char pad[0x224];
    unsigned char m224;
    char pad2[0x228 - 0x225];
    void* m228;
    void f();
};
void Cls::f() {
    func_004576CC(this, 7, 0);
    m224 = 1;
    func_00166C00(data_0070B850, 1);
    m228 = 0;
}
