// 0x40430C
struct Temp {
    char b[0x1c];
};

void func_0040001C(Temp*);

struct Obj {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void vf(void*, void*);
};

struct P {
    char pad0[0x10];
    Obj* m10;
};

void func_0040430C(P* self, int a1, void* a2) {
    if (!self->m10) return;
    Temp t;
    func_0040001C(&t);
    self->m10->vf(&t, a2);
}
