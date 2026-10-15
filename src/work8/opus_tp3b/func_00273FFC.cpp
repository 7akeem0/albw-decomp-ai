typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_00110848(void*);
struct Eff { u8 pad[0x1c]; s32 id; };
struct EffHandle { Eff* p; s32 id; };
struct Anim344 { EffHandle start(const char* name); };
struct Sub4 { void func_003521F0(s32); };
struct Obj {
    u8 pad0[4];
    Sub4 m4;
    u8 pad5[0x24 - 5];
    Anim344* m20;
    void startEff(EffHandle* h, const char* name) {
        if (m20 == 0) {
            h->p = 0;
            h->id = 0;
            return;
        }
        if (h->p != 0) {
            s32 id=h->id;Eff*p=h->p;if(h->p->id == h->id)func_00110848(h->p);
        }
        *h = m20->start(name);
    }
};
struct Req { Obj* o; const char* n; Req() {} Req(Obj* a, const char* b) : o(a), n(b) {} };
struct X {
    u8 pad[0x54];
    Req m54;
    EffHandle m5c;
    u8 pad64[4];
    s8 m68;
    void f(Obj* a, const char* name);
};
void X::f(Obj* a, const char* name) {
    Req r(a, name); m54 = r;
    if (r.o) {
        r.o->m4.func_003521F0(m68);
        Req q = m54;
        q.o->startEff(&m5c, q.n);
    }
}
