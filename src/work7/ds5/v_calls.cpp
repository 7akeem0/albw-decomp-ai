// 0x408FD0 (v2) and 0x408F94 (v3) variants
struct Cls;
struct Base {
    virtual void v0();
    virtual void v1();
    virtual void v2(Cls*, unsigned int, unsigned int, unsigned int);
    virtual unsigned int v3(Cls*, unsigned int, unsigned int);
};
struct Cls {
    char pad[0x18];
    Base* m18;
    void a(unsigned int a1, unsigned int a2, unsigned int a3);
    unsigned int b(unsigned int a1, unsigned int a2);
    void c(unsigned int a1, unsigned int a2, unsigned int a3);
    unsigned int d(unsigned int a1, unsigned int a2);
};
void Cls::a(unsigned int a1, unsigned int a2, unsigned int a3) {
    Base* o = m18;
    if (!o) return;
    o->v2(this, a1, a2, a3);
}
unsigned int Cls::b(unsigned int a1, unsigned int a2) {
    Base* o = m18;
    unsigned int r = 0;
    if (o) r = o->v3(this, a1, a2);
    return r;
}
void Cls::c(unsigned int a1, unsigned int a2, unsigned int a3) {
    unsigned int x = a1;
    unsigned int y = a2;
    Base* o = m18;
    if (!o) return;
    o->v2(this, x, y, a3);
}
unsigned int Cls::d(unsigned int a1, unsigned int a2) {
    unsigned int x = a1;
    unsigned int y = a2;
    Base* o = m18;
    unsigned int r = 0;
    if (o) r = o->v3(this, x, y);
    return r;
}
