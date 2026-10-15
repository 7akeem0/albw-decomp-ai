typedef unsigned int u32;
typedef unsigned char u8;

struct Arg;
typedef void (*ArgFn)(Arg*);

struct X {
    u8 pad0[8];
    ArgFn fn;
};

struct Arg {
    X* m0;
    u32 m4;
};

struct Mid {
    u8 pad0[0x140];
    u32 m140;
};

struct Self {
    u8 pad0[0x24];
    Mid* m24;
    u8 pad1[0x3c - 0x28];
    u32 m3c;
};

extern "C" u32 func_0057F260(u32 x);
extern "C" u32 func_0056D3E4(u32 x, u32 y);
extern "C" u32 func_0054722C(u32 x, u32 y);

extern "C" u32 func_0058791C(Self* self, Arg* a1) {
    X* x = a1->m0;
    x->fn(a1);
    u32 m4 = a1->m4;
    u32 v = func_0057F260(self->m24->m140);
    u32 r = func_0056D3E4(v, m4);
    if (r == 0xffffffff) return 0;
    return func_0054722C(self->m3c, r);
}
