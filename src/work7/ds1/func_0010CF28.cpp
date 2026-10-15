typedef unsigned int u32;

extern "C" void* func_0010DB90(void*);
extern "C" void* data_00715210;

struct VB {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(void*, u32);
};

struct S {
    void f(VB* a1, u32 a2);
};

void S::f(VB* a1, u32 a2) {
    if (!a1) {
        a1 = (VB*)func_0010DB90(data_00715210);
        if (!a1) return;
    }
    a1->v6(this, a2);
}
