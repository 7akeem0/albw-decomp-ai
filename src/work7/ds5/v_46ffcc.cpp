// 0x46FFCC variants
extern void* data_007142C8;
extern "C" void func_0014D494(void*);
struct Cls {
    char pad0[0xd];
    unsigned char m0d;
    unsigned char m0e;
    char pad[0xe4 - 0xf];
    void* m0e4;
    void a(void* a1);
    void b(void* a1);
};
void Cls::a(void* a1) {
    if (!(m0d == 0 && m0e == 0)) return;
    m0e4 = a1;
    m0e = 1;
    void* g = data_007142C8;
    if (g == 0) return;
    func_0014D494(*(void**)((char*)g + 0x12c));
}
void Cls::b(void* a1) {
    if (!(m0d == 0 && m0e == 0)) return;
    m0e4 = a1;
    m0e = 1;
    if (data_007142C8 == 0) return;
    func_0014D494(*(void**)((char*)data_007142C8 + 0x12c));
}
