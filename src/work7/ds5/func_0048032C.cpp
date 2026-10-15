// 0x48032C
extern "C" void func_0012C718(void*);
struct Cls {
    char pad[0x78];
    int m78;
    char pad2[0xc4 - 0x7c];
    void* mC4;
    void f();
};
void Cls::f() {
    if (mC4) return;
    if (m78 < 0x2d) return;
    func_0012C718(this);
}
