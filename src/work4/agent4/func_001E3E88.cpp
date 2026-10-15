typedef unsigned char u8;
struct X {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual int v19(int a);
    int f(int a);
    char pad[0x494 - 4];
    u8 m494;
    void setM494(u8 v) { m494 = v; }
};
int X::f(int a) {
    int r = v19(a);
    if (r == 2)
        setM494(1);
    return r;
}
