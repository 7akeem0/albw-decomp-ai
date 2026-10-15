// 0x41497C
extern "C" void func_003E0AF0(void*);
extern "C" void* func_00419924();
extern "C" void func_00419C50(void*, void*);
struct Cls {
    char pad1[8];
    int m8;
    char pad2[0x14 - 0xc];
    unsigned char m14;
    void f();
};
void Cls::f() {
    if (m14 != 0) {
        for (int i = 0; i < m8; i++) {
            void* p = ((void**)this)[i];
            if (p != 0) {
                func_003E0AF0(p);
                ((void**)this)[i] = 0;
            }
        }
        m8 = 0;
        void* r = func_00419924();
        func_00419C50(r, this);
        m14 = 0;
    }
}
