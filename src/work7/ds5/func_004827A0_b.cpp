// 0x4827A0 variant B: BF16 via pointer locals
extern "C" void func_00231448(void*);
extern "C" void func_00656CA4(void*, int);
extern "C" void func_001B6C04(void*);
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
    char pad2[0xa8 - 0x18];
    unsigned char mA8;
    void f();
};
void Cls::f() {
    Inner* s = m14;
    mA8 = 0;
    BF16* p = &s->m16;
    p->reset(2);
    func_00231448((char*)this + 0x44);
    func_00231448((char*)this + 0x50);
    func_00231448((char*)this + 0x5c);
    func_00656CA4((char*)this + 0x68, 0);
    Inner* q = m14;
    BF16* r = &q->m16;
    r->set(0x40);
    func_001B6C04(this);
}
