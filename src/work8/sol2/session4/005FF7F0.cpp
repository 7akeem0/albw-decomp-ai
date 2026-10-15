#pragma O3
#pragma Otime
typedef unsigned int u32;

extern "C" void* memset(void*, int, unsigned);

struct Obj {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mc;
    u32 m10;
    u32 m14;
    void* m18;
    u32 m1c;
    u32 m20;
    u32 m24;
    u32 m28;
    u32 m2c;
    u32 m30;
    u32 m34;
};

extern "C" void func_005FF7F0(Obj* self) {
    Obj* o = self;
    if(!o)return; {
        if (o->m4 != 0) goto go;
        if (o->m18 == 0) return;
    go:
        u32 n=o->m20;u32*q=(u32*)o->m18;
        memset(q, 0, n*28);
    o->mc = 0;
    o->m10 = 0;
    o->m20 = 0;
    o->m28 = 0;
    o->m14 = 0;
    o->m24 = 0;
    o->m34 = 0;
    o->m30 = 0;
    }
}
