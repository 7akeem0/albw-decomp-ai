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
extern s32 func_0058ACC8(void*, f32);
static s32 ctx_0022AEEC_0(void* a0,f32 a1){return func_0058ACC8(a0,a1);}

extern void func_0036C09C(void*, s32);
extern s32 func_0058A8F0(void*);
extern void func_0065E8B8(void*, s32) ;
void func_0022AEEC(void* self) {
    if (ctx_0022AEEC_0(self, 20.0f) != 0) func_0036C09C((char*)self + 0x968, 2);
    if (ctx_0022AEEC_0(self, 20.0f) != 0) {
        u32 f = *(u32*)((char*)self + 0x59c);
        f |= 2u;
        *(u32*)((char*)self + 0x59c) = f;
    }
    if (func_0058A8F0(self) != 0) func_0065E8B8((char*)self + 0x8fc, 3);
}
