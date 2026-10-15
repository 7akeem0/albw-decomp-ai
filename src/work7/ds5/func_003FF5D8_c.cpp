// 0x3FF5D8 variant C: typed virtual call
struct Arg { char pad[0x44]; unsigned char m44, m45, m46; };
struct Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual int v12(int, Arg*, int);
};
struct Cls {
    int m0;
    int m4;
    int m8;
    Base* mC;
    bool f(Arg* a);
};
bool Cls::f(Arg* a) {
    if (a->m46 != 0) {
        m4 = mC->v12(m4, a, m8);
    }
    if (a->m44 & 2) return a->m45 != 0;
    return true;
}
