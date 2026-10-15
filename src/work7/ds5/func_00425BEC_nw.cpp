// 0x425BEC
extern "C" void func_002C00A8(void*);
extern "C" void  func_0066C19C(void*, int);
extern "C" void func_00231340(void*);
struct BF16 {
    unsigned short v;
    BF16() {}
    BF16(unsigned short x) : v(x) {}
    void clr(unsigned short m) { *this = BF16(v & ~m); }
};
struct Sub14 { char pad[0x16]; BF16 f16; };
struct Cls {
    char pad0[0x14];
    Sub14* m14;
    char pad2[0x5c - 0x18];
    char x5c[4];
    char pad4[0x79 - 0x60];
    unsigned char m79;
    void f();
};
void Cls::f() {
    func_002C00A8(m14);
    Sub14* s = m14;
    BF16* p = &s->f16;
    p->clr(2);
    m79 = 0;
    func_0066C19C((char*)this + 0x38, 0);
    func_00231340((char*)this + 0x5c);
    func_0066C19C((char*)this + 0x38, 1);
}
