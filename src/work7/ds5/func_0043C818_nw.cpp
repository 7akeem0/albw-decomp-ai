// 0x43C818
extern "C" void func_0066C424(void*, int) ;
struct Sub { char pad1[0xd]; unsigned char mD, mE; char pad2[0x284 - 0xf]; unsigned char m284, m285; };
struct Cls {
    char pad1[0x78];
    signed char m78;
    char pad2[0x154 - 0x79];
    Sub* m154;
    void f();
};
void Cls::f() {
    Sub* p = m154;
    if (p != 0 && p->mD == 3 && p->mE == 3) {
        p->m284 = 0;
        p->m285 = 1;
    }
    signed char s = m78;
    if (s == 1 || s == 2) func_0066C424((char*)this + 0x98, 9);
}
