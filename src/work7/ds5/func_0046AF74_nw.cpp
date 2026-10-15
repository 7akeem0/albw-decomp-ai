// 0x46AF74
extern "C" void func_0066DF38(void*, int) ;
struct Elem { char pad[0x35]; unsigned char m35; };
struct Sub { char pad[8]; int m8; char* mC; };
struct Cls {
    char pad1[0x1c];
    Sub* m1C;
    char pad2[0x76 - 0x20];
    short m76;
    char pad3[0xc4 - 0x78];
    unsigned char mC4;
    void f();
};
void Cls::f() {
    short idx = m76;
    Sub* c = m1C;
    if (idx >= 0) {
        Elem* e = (unsigned)c->m8 > (unsigned)idx
                      ? (Elem*)(c->mC + idx * 0x38)
                      : (Elem*)c->mC;
        if (e->m35 != 0) return;
    }
    mC4 |= 1;
    func_0066DF38((char*)this + 0x98, 5);
}
