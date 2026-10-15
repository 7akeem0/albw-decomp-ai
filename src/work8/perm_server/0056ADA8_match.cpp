


typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;


struct NoThrow {};
void* operator new(unsigned int, NoThrow);
inline void* operator new(unsigned int, void* p) { return p; }



struct Host58;
struct Flags58 {
    char pad0[0xc4];
    u8 mC4;
};
struct Host58 {
    char pad0[0xf0];
    Flags58* mF0;
};



struct Entry56 { u16 tag; u16 pad; u32 m4; u32 m8; };
struct Blk56 { char pad[0x14]; Entry56 e0, e1, e2; };
u32 f56AB0C(void* o) {
    const u16 tag = 0x4002;
    u8* p = (u8*)o;
    if (*(u16*)(p + 0x14) == tag) p += 0x14;
    else if (*(u16*)(p + 0x20) == tag) p += 0x20;
    else if (*(u16*)(p + 0x2c) == tag) p += 0x2c;
    else p = 0;
    return *(u32*)(p + 4);
}
u32 f56AB84(void* o) {
    const u16 tag = 0x4001;
    u8* p = (u8*)o;
    if (*(u16*)(p + 0x14) == tag) p += 0x14;
    else if (*(u16*)(p + 0x20) == tag) p += 0x20;
    else if (*(u16*)(p + 0x2c) == tag) p += 0x2c;
    else p = 0;
    return *(u32*)(p + 4);
}
u32 f56ADA8(void* o) {
    const u16 tag = 0x2001; __schedule_barrier();
    u8* p = (u8*)o;
    if (*(u16*)(p + 0x14) == tag) p += 0x14;
    else if (*(u16*)(p + 0x20) == tag) p += 0x20;
    else if (*(u16*)(p + 0x2c) == tag) p += 0x2c;
    else p = 0;
    return *(u32*)(p + 8);
}
u32 f56ADE8(void* o) {
    const u16 tag = 0x2002;
    u8* p = (u8*)o;
    if (*(u16*)(p + 0x14) == tag) p += 0x14;
    else if (*(u16*)(p + 0x20) == tag) p += 0x20;
    else if (*(u16*)(p + 0x2c) == tag) p += 0x2c;
    else p = 0;
    return *(u32*)(p + 4);
}
u32 f56AE28(void* o) {
    const u16 tag = 0x2001;
    u8* p = (u8*)o;
    if (*(u16*)(p + 0x14) == tag) p += 0x14;
    else if (*(u16*)(p + 0x20) == tag) p += 0x20;
    else if (*(u16*)(p + 0x2c) == tag) p += 0x2c;
    else p = 0;
    return *(u32*)(p + 4);
}


struct O56CA78 { void* m0; u8* m4; u32 m8; u8 mC; };
u32 func_0056ACF4(void*);
u8* f56CA78(O56CA78* o, u32 idx) {
    if (!o->mC) return 0;
    u32 off = func_0056ACF4(o->m0);
    u8* t = o->m4 + idx * 12;
    return (u8*)(*(u32*)(t + 8)) + off + 8;
}


struct E84 { char pad[0x84]; u8 m84; };
struct X575 { char pad[0x110]; E84** m110; };
bool f57559C(X575* o, u8* a, u8* b, u8* c) {
    E84** arr = o->m110;
    *a = arr[0]->m84;
    *b = arr[1]->m84;
    *c = arr[2]->m84;
    u32 r = (u32)(*a + *b) + *c;
    if (r) r = 1;
    return r;
}


struct VX56 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
              virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
              virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
              virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
              virtual int v20(); };
struct Out56F8 { u32 m0, m4, m8; };
struct Holder56 { char pad[0x18]; u32 a, b; };
extern Holder56 ro_006BB310;
void f56F89C(Out56F8* out, VX56* x) {
    u32 a = 0, b = 0;
    if (x->v20() == 1) { a = ro_006BB310.a; b = ro_006BB310.b; }
    out->m0 = 0;
    out->m4 = a;
    out->m8 = b;
}
