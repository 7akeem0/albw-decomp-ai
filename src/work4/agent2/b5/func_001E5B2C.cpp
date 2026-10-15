// 0x1E5B2C: forwards to own virtual slot 19 (+0x4c) with one argument (tail call through vtable)
struct Obj1E5B2C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(int a);
    void f(int a);
};
void Obj1E5B2C::f(int a) { v19(a); }
