
struct Base {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual int v15();
    virtual void v16(int,int);
};
struct Cls : Base {
    char pad[0x14 - 4];
    Base* m14;
    int m18;
    void* m1C;
    char pad2[0x24 - 0x20];
    int m24;
    void f(int a, int mode);
};
void Cls::f(int a, int mode) {
    if (m18 != 0 && m1C != 0) {
        if (mode == 0) { m24 = a; return; }
        if (mode == 1) { m24 = m24 + a; return; }
        if (mode == 2) { m24 = v15() - a; return; }
    } else {
        Base* o = m14;
        o->v16(a,mode);
    }
}
