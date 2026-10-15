// 0x40F6FC
extern "C" void func_0010C1B8(void*);
extern "C" void func_003C8BD8(int);
struct Sub { char pad[4]; int m4; };
struct Cls {
    char pad1[0x34];
    Sub* m34;
    char pad2[0x50 - 0x38];
    unsigned char m50;
    unsigned char m51;
    void f();
};
void Cls::f() {
    if (m51 == 0 || m50 == 0) return;
    Sub* p = m34;
    int v = p->m4;
    if ((v & ~1) != 0) {
        if (v & 1) func_0010C1B8((void*)v);
        v = p->m4;
        func_003C8BD8(v & ~1);
        p->m4 = 0;
    }
    m50 = 0;
}
