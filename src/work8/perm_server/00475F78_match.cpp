
extern "C" void func_002C00A8(void*);
struct BF16 {
    unsigned short v;
    BF16() {}
    BF16(unsigned short x) : v(x) {}
    void set(unsigned short b) { *this = BF16(v | b); }
};
struct Inner { char pad[0x16]; BF16 m16; };
struct Cls {
    char pad1[0x14];
    Inner* m14;
    int m18;
    char pad3[0x84 - 0x1c];
    unsigned char m84;
    char pad4[0xb4 - 0x85];
    unsigned char mB4;
    unsigned char mB5;
    void f();
};
void Cls::f() {
    m18 |= 0x20; __schedule_barrier();
    if (m84 == 0 && mB5 == 0) {
        BF16* p = &m14->m16;
        p->set(0x40);
        func_002C00A8(m14);
        BF16* q = &m14->m16;
        q->set(2);
    }
    mB4 = 0;
}
