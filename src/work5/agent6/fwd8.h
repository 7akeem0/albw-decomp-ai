// agent6: 8-byte forwarder object {vptr ro_6D1A70, Target* m4}; array-constructed by 0x2E2F78 (vec_ctor, ctor 0x1DB504)
// vtable: [0]=0 [1]=0 (dtors, VFE-removed) [2]=0x1DB4F4 -> m4->vf6(a,b) [3]=0x1DB4E4 -> m4->vf7(a)
struct Fwd8Target {
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3();
    virtual void t4(); virtual void t5();
    virtual void t6(int a, int b);   // +0x18
    virtual void t7(int a);          // +0x1c
};
struct Fwd8 {
    Fwd8();
    virtual ~Fwd8();
    virtual void f2(int a, int b);
    virtual void f3(int a);
    Fwd8Target* m4;
};
