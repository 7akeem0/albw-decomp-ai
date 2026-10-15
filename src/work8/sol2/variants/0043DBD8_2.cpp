
extern "C" void func_001B6C2C(void*);
extern "C" void func_004479B4(void*);
struct Sub { char pad[0xd]; signed char m0d; unsigned char m0e; };
struct Cls {
    char pad0[0x148];
    Sub* m148;
    char pad1[0x154 - 0x14c];
    Sub* m154;
    void f();
};
void Cls::f() {
    Cls*self=this;Sub*p=self->m148;
    if (p == 0) return;
    signed char s=p->m0d;
    if (s == 1 || (s == 3 && p->m0e == 3)) {
        Sub*q=self->m154;if (p != q) return;
        func_004479B4(self->m154);
    } else {
        func_001B6C2C(p);
    }
}
