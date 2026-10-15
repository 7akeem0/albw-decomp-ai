typedef unsigned int u32;
typedef unsigned char u8;

struct Ctl {
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
    virtual void v12();
    virtual void call(u32 a, u32 b);
    u8 m4;
};
struct Owner {
    char p0[4];
    u32 m4;
    Ctl* m8;
};

u32 func_0056CEB4(u32 x);

extern "C" u32 func_00569A64(Owner* self, u32 a, u32 b) {
    u32 t = func_0056CEB4(self->m4);
    if (t == 0 || self->m8 == 0) return t;
    Ctl* o = self->m8;
    u32 x = a;
    u32 y = b;
    if (o->m4 != 0) o->call(x, y);
    return 1;
}
