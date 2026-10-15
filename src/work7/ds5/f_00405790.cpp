// 0x405790
extern "C" void func_0040411C(void*);
struct Cls {
    char pad[0xa4];
    void* m0a4;
    char pad2[0xcc - 0xa8];
    unsigned short m0cc;
    unsigned short m0ce;
    char pad3[0xfc - 0xd0];
    void* m0fc;
    void* m100;
    void f();
};
void Cls::f() {
    if (m0a4 == 0) return;
    func_0040411C(m0fc);
    if (m100) func_0040411C(m100);
    if (m0a4) func_0040411C(m0a4);
    m0fc = 0;
    m0a4 = 0;
    m0cc = 0;
    m0ce = 0;
}
