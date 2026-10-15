// 0x413FE0
extern "C" void* func_00419924(void*);
extern "C" void* func_00419A80(void*, void*);
extern "C" void func_003DE404(void*, int);
struct Cls {
    void* m0;
    void* m4;
    int m8;
    char pad1[0x40 - 0xc];
    int m40;
    void f(int v);
};
void Cls::f(int v) {
    m40 = v;
    void* r = func_00419924(this);
    func_00419A80(r, this);
    if (m40 == 1) {
        for (int i = 0; i < m8; i++) {
            void* p = ((void**)this)[i];
            if (p != 0) func_003DE404(p, 1);
        }
    }
}
