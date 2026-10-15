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
extern void func_0051D2F4(s32*, s32, f32, s32, s32);
extern void func_0014FAFC(void*, s32, f32);
extern s32 func_0058A8F0(void*);
extern s32 func_004FB208(void*, int, int, int, int);
extern void func_00658604(void*, s32) ;
static void issue(void*self,int ok){if(ok)func_00658604((char*)self+0x8bc,0xb);else func_00658604((char*)self+0x8bc,9);}
void func_0016318C(void* self) {
    func_0051D2F4((s32*)((char*)self + 0x3e8), *(s32*)((char*)self + 0x904), 0.1f, 0x2d82d82, 0x7fffffff);
    func_0014FAFC(self, *(s32*)((char*)self + 0x3e8), 0.05f);
    if (func_0058A8F0(self) != 0) {
        issue(self,func_004FB208(self,0,0,0,0)!=0);
    }
}
