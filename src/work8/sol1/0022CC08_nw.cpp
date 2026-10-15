#pragma once
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
typedef float f32;
typedef double f64;
typedef unsigned long ulong;

struct BitFlag32 {
    u32 v;
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u32 m) { change(m, true); }
    void reset(u32 m) { change(m, false); }
};

struct BitFlag16 {
    u16 v;
    void change(u16 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u16 m) { change(m, true); }
    void reset(u16 m) { change(m, false); }
};
extern void func_0065E8B8(void*, int) ;
struct Pair{u32 a,b;};
void func_0022CC08(void* self) {
    s32 v = *(s32*)((char*)self + 0xcb4);
    char* r2 = (char*)self + 0x8fc;
    if (v <= 0) {
        if (*(u8*)((char*)self + 0xd0a) == 0) { func_0065E8B8(r2, 7); return; }
        *(u8*)((char*)self + 0xd08) = 1;
        *(u8*)((char*)self + 0xd0a) = 1;
        func_0065E8B8(r2, 0xc);
    } else {
        Pair p=*(Pair*)((char*)self+0xa70);
        if(p.a<p.b){*(u32*)((char*)self+0xa70)=p.a+1;return;}
        func_0065E8B8(r2, 6);
    }
}
