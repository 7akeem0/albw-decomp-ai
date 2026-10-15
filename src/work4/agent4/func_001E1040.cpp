struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v28();
};
class X {
public:
    Obj* func_001E1040();
    char pad[0x1628];
    Obj* m1628;
};
Obj* X::func_001E1040() {
    m1628->v28();
    return m1628;
}
