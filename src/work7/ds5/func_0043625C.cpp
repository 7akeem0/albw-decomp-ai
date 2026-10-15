// 0x43625C
struct Src {
    int m0, m4, m8;
};
struct Dst {
    char pad[4];
    int m4, m8, mC;
};
void func_0043625C(Dst** p, Src* s) {
    Dst* d = *p;
    d->m4 = s->m0;
    d->m8 = s->m4;
    d->mC = s->m8;
}
