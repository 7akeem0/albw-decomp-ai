// 0x46A1D4
extern "C" int func_00584B94(void*, int);
extern "C" void func_002C00A8(void*);
extern void* data_0070B728;
struct BF16 {
    unsigned short v;
    BF16() {}
    BF16(unsigned short x) : v(x) {}
    void reset(unsigned short b) { *this = BF16(v & ~b); }
    void set(unsigned short b) { *this = BF16(v | b); }
};
struct Inner { char pad[0x16]; BF16 m16; };
struct Cls {
    char pad1[0x14];
    Inner* m14;
    void f(int a);
};
void Cls::f(int a) {
    if (a != 0 && func_00584B94(data_0070B728, 0x20a) != 0) {
        BF16* p = &m14->m16;
        p->set(0x40);
    } else {
        func_002C00A8(m14);
        BF16* q = &m14->m16;
        q->reset(0x40);
    }
}
