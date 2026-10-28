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

extern char ro_006EF60C[];
struct G70BB18 { void* m0; void* m4; };
extern G70BB18 g_70BB18;
extern void func_001B7980(void*);
extern void func_004A1520(void*);

template<class T0> inline void hlp0(T0& self) { if (self == g_70BB18.m4) {
        g_70BB18.m4 = 0;
        void* p = g_70BB18.m0;
        func_001B7980((char*)p + 0xf34);
        func_001B7980((char*)p + 0xefc);
        g_70BB18.m0 = 0;
    }
    func_004A1520(self); }
void func_0016B880(void* self) {
    *(void**)self = ro_006EF60C; 
    hlp0(self);
}
