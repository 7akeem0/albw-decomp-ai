// 0x414348
struct Sub { char pad[0x11]; unsigned char m11; };
struct Cls {
    void* m0;
    char pad0[0xc - 4];
    void (*mC)(void*, int, void*);
    unsigned int m10;
    unsigned char m14;
    unsigned char m15;
    unsigned char m16;
    char pad2[0x1c - 0x17];
    Sub* m1c;
    void f();
};
void Cls::f() {
    if (m14 == 0 || m16 == 0) return;
    if (m0 == 0 || m1c == 0) return;
    if (m1c->m11 == 1 || m1c->m11 == 2) return;
    if (mC) mC(this, 0, (void*)m10);
    m16 = 0;
    m15 = 0;
}
