// 0x461C84 variant B: BF16 via pointer locals (KB recipe)
extern "C" void func_001B6DE0(void*);
extern "C" void func_002C00A8(void*);
struct BF16 {
    unsigned short v;
    BF16() {}
    BF16(unsigned short x) : v(x) {}
    void reset(unsigned short b) { *this = BF16(v & ~b); }
};
struct Inner { char pad[0x16]; BF16 m16; };
struct Cls {
    char pad1[0x14];
    Inner* m14;
    char pad2[0x84 - 0x18];
    int m84;
    char pad3[0x98 - 0x88];
    unsigned char m98, m99;
    char pad4[0x9c - 0x9a];
    int m9C;
    void f();
};
void Cls::f() {
    m84 = -1;
    func_001B6DE0(this);
    BF16* p = &m14->m16;
    p->reset(0x40);
    func_002C00A8(m14);
    BF16* r = &m14->m16;
    r->reset(2);
    m98 = 0;
    m99 = 0;
    m9C = 0;
}
