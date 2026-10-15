// 0x474AF0
extern "C" void func_0047F9CC(void*, int);

struct Cls {
    char pad[0xc8];
    int mC8;
    char pad2[0xf8 - 0xcc];
    unsigned char mF8;
    char pad3[0xfc - 0xf9];
    void* mFC;
    void f();
};
void Cls::f() {
    if (mC8 != 8) return;
    func_0047F9CC(mFC, mF8);
}
