// 0x57EF74: return func_1104E4((int)(s.hi - s.lo), (int)obj->vf18()) - 1; obj = m34, s = m20->m2c (+4 span)
typedef unsigned int u32;
typedef unsigned char u8;

struct Ifc57 {
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
    virtual void d16();
    virtual void d17();
    virtual float getF();
};

struct Span57 {
    u8 pad0[4];
    float lo;
    u8 pad1[4];
    float hi;
};

struct Q57 {
    u8 pad0[4];
    Span57 s;
};

struct Mid57 {
    u8 pad0[0x2c];
    Q57* m2c;
};

struct Owner57 {
    u8 pad0[0x20];
    Mid57* m20;
    u8 pad1[0x34 - 0x24];
    Ifc57* m34;
};

int func_001104E4(int b, int a);

int func_0057EF74(Owner57* self)
{
    Ifc57* obj = self->m34;
    int a = (int)obj->getF();
    Span57& s = self->m20->m2c->s;
    int b = (int)(s.hi - s.lo);
    return func_001104E4(b, a) - 1;
}
