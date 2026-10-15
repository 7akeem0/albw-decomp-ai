// 0x414570
extern "C" void func_003DE404(void*, void*);
struct Cls {
    char pad0[8];
    int m8;
    char pad2[0x40 - 0xc];
    int m40;
    void f();
};
void Cls::f() {
    if (m40 == 1) return;
    for (int i = 0; i < m8; i++) {
        void* p = ((void**)this)[i];
        if (p) func_003DE404(p, (void*)m40);
    }
}
