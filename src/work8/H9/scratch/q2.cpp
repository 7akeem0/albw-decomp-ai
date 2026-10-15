// if (f[0xdb]) { if (func_004EF418(data_00709DF8, &m520, 3, 0)) f[0xdb]=0; } else if (f[0xda]) { if (m41c->v19(data_0070FAE0, 0)) f[0xda]=0; }   (f = this+0x400)
typedef unsigned char u8;
struct EventState;
extern EventState* data_00709DF8;
extern char data_0070FAE0[];
int func_004EF418(EventState* ev, void* p, int a, int b);
struct Obj41C {
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual void v4() {}
    virtual void v5() {}
    virtual void v6() {}
    virtual void v7() {}
    virtual void v8() {}
    virtual void v9() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual int v19(const void* name, int z) { return 0; }
};
struct Owner { char p0[0x41c]; Obj41C* m41c; char p1[0x520 - 0x420]; char m520[4]; };
struct Flags { char p0[0xda]; u8 m4da; u8 m4db; };
void func_0031951C(Owner* self) {
    Flags* f = (Flags*)((char*)self + 0x400);
    if (f->m4db) {
        if (func_004EF418(data_00709DF8, self->m520, 3, 0)) f->m4db = 0;
    } else {
        if (f->m4da) {
            Obj41C* o = self->m41c;
            if (o->v19(data_0070FAE0, 0)) f->m4da = 0;
        }
    }
}
