

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" s32 func_0056C508(void*, void*);
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual s32 v2(void* a);
    virtual void v3();
    virtual s32 v4(void* a);
};
struct Sub;
struct Outer {
    virtual void o0();
    virtual void o1();
    virtual void o2();
    virtual void o3();
    virtual s32 o4(void* a);
    u8 pad0[8];
    Sub* sub;
};
struct Sub {
    virtual s32 f(void* a);
    u8 pad0[0x210 - 4];
    Obj* m210;
};
Outer* own(Sub*p){return (Outer*)((char*)p-0xc);}
s32 Sub::f(void* a) {
    Outer* o=own(this);__schedule_barrier();void* aa=a;
    if (m210 != 0) {
        s32 r = m210->v2(aa);
        if (r != 0) return r;
    }
    const int r2 = func_0056C508((char*)o + 0xc, aa);
    if (r2 != 0) return r2;
    return o->o4(aa);
}
