typedef unsigned int u32;

struct Node { u32 m0; u32 m4; };
struct Sub140 { char p0[0x220]; };
struct Mid { char p0[0x140]; Sub140* m140; };
struct Owner { char p0[0x24]; Mid* m24; };
struct Arg {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    u32 m4;
};

Node* func_0057F260(Sub140* p);
u32 func_0056D3E4(Node* n, u32 x);
void func_00569884(Node* n, u32 v);

extern "C" void func_00569834(Owner* self, Arg* a) {
    a->v2();
    u32 x = a->m4;
    u32 r = func_0056D3E4(func_0057F260(self->m24->m140), x);
    func_00569884(func_0057F260(self->m24->m140), r);
}
