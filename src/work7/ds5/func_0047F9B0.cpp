// 0x47F9B0
extern "C" void func_0014CFA0(void*);
extern "C" void func_0047F9CC(void*, int);

struct Cls {
    char pad[0xf8];
    unsigned char mF8;
    char pad2[0xfc - 0xf9];
    void* mFC;
    void f();
};
void Cls::f() {
    func_0014CFA0(this);
    func_0047F9CC(mFC, mF8);
}
