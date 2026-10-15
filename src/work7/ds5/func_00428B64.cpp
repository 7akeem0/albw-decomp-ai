// 0x428B64
extern "C" void func_00428B84(void*, int);

struct Inner {
    char pad[0x44];
    unsigned char m44;
};
struct Cls {
    char pad[0x54];
    Inner* m54;
    void f();
};
void Cls::f() {
    Inner* p = m54;
    if (p) p->m44 &= 0xfe;
    func_00428B84(this, 1);
}
