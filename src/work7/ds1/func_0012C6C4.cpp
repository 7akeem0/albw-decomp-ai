typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void func_0012C718(void*);

struct Sub {
    u8 pad[0xd];
    u8 m0d;
    u8 m0e;
};

struct S {
    u8 pad[0x1ec];
    Sub* m1ec;
    void f(u32* p);
};

void S::f(u32* p) {
    u32 v = *p;
    if (v == 0) {
        Sub* s = m1ec;
        if (s->m0d == 3 && s->m0e == 3) func_0012C718(s);
    } else if (v == 3) {
        Sub* s = m1ec;
        if (s->m0d == 0 && s->m0e == 0) s->m0e = 1;
    }
}
