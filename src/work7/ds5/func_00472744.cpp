// 0x472744
struct Elem { char pad[0x35]; unsigned char m35; };
struct Sub { char pad[8]; int m8; char* mC; };
struct Cls {
    char pad1[0x1c];
    Sub* m1C;
    char pad2[0x6e - 0x20];
    short m6E;
    char pad3[0x7a - 0x70];
    short m7A;
    bool f();
};
bool Cls::f() {
    Sub* c = m1C;
    short a = m6E;
    if (a >= 0) {
        char* p = (unsigned)c->m8 > (unsigned)a ? c->mC + a * 56 : c->mC;
        if (((Elem*)p)->m35 != 0) return true;
    }
    short b = m7A;
    if (b >= 0) {
        char* p = (unsigned)c->m8 > (unsigned)b ? c->mC + b * 56 : c->mC;
        if (((Elem*)p)->m35 != 0) return true;
    }
    return false;
}
