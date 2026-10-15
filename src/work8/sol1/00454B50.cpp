
void func_00474510(void*);

struct V {
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6();
    virtual void a7();
    virtual void a8();
    virtual void a9();
    virtual void a10();
    virtual void a11();
    virtual void a12();
    virtual void a13();
    virtual void a14();
    virtual void a15();
    virtual void a16();
    virtual void a17();
    virtual void a18();
    virtual void vf();
};

struct P : V {
    char p0[0x18 - 4];
    unsigned m18;
    char p1[0x8c - 0x1c];
    unsigned char m8c;
};

void func_00454B50(P* self) {
    if ((int)(self->m18<<29)>=0 && self->m8c) {
        self->vf();
        self->m8c = 0;
    }
    func_00474510(self);
}
