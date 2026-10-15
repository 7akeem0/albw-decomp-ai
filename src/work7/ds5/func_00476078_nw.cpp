// 0x476078
extern "C" void  func_0066E65C(void*, int);
struct Elem { char pad[0x35]; unsigned char m35; };
struct Sub { char pad[8]; int m8; char* mC; };
struct Cls {
    char pad1[0x1c];
    Sub* m1C;
    char pad2[0x22 - 0x20];
    short m22;
    char pad3[0x2e - 0x24];
    short m2E;
    char pad4[0x80 - 0x30];
    char m80;
    void f();
};
void Cls::f() {
    Sub* c = m1C;
    short a = m22;
    if (a >= 0) {
        char* p = (unsigned)c->m8 > (unsigned)a ? c->mC + a * 56 : c->mC;
        if (((Elem*)p)->m35 != 0) return;
    }
    short b = m2E;
    if (b >= 0) {
        char* p = c->mC;
        if ((unsigned)b < (unsigned)c->m8) p += b * 56;
        if (((Elem*)p)->m35 != 0) return;
    }
    func_0066E65C((char*)this + 0x80, 2);
}
