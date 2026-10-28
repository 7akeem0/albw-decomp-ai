struct Sub { char pad[0x24]; float m24; };
struct Obj { char pad[0x5FC]; struct Sub *m5FC; };
extern int func_0052EBA0(struct Obj *o, int a1);
int func_0052ED30(struct Obj *o, int a1)
{
    if (o->m5FC->m24 > 0.9f) {
        return func_0052EBA0(o, a1);
    }
    return 0;
}
