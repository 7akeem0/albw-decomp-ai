// 0x4149E4
extern "C" void func_003E16D4(void*, int);
struct Cls {
    void* m0;
    void* m4;
    int m8;
    char pad1[0x15 - 0xc];
    unsigned char m15;
    unsigned char m16;
    unsigned char m17;
    unsigned char m18;
    void f();
};
void Cls::f() {
    if (m16 != 0) {
        for (int i = 0; i < m8; i++) {
            void* p = ((void**)this)[i];
            if (p != 0) func_003E16D4(p, 1);
        }
        m16 = 0;
    }
    m18 = 0;
    m17 = 0;
    m15 = 0;
}
