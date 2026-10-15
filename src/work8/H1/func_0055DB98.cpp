typedef unsigned int u32;
typedef unsigned char u8;

class Ent55DB98 {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual u8* vf3();
};
class Poly55DB98 {
public:
    virtual void pf0();
    virtual void pf1();
    virtual void pf2();
    u32 m4;
};
struct Outer55DB98 {
    u8 p0[0xc];
    u32 m0c;
    Poly55DB98 poly;
};
struct Mgr55DB98 {
    u8 p0[0x1418];
    Ent55DB98* arr[16];
};

void func_004A1B9C(void* sret, u32 a, u32 b);

extern "C" void func_0055DB98(Outer55DB98* self, Mgr55DB98* mg) {
    Poly55DB98* pp = (Poly55DB98*)((u8*)self + 0x10);
    Ent55DB98** slot = mg->arr;
    if (self->m0c < 0x10) slot += self->m0c;
    Ent55DB98* v = *slot;
    if (v) {
        u8* r5 = v->vf3();
        pp->pf2();
        u32 a = *(u32*)(r5 + 0x20);
        u32 b = pp->m4;
        u8 ret[12];
        if (a) func_004A1B9C(ret, a, b);
    }
}
