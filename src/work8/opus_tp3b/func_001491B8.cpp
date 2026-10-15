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
u32 func_0014DDEC(void*);
u32 func_005568E8(void*);
u32 func_0052FBA0(void*, u32);
u32 func_00584B1C(u32,void*);
extern u32 data_0070B728;
extern void* data_0070FB60;
extern void* data_00706E20;
struct This18CD {
    char pad0[0x454];
    u32 m57c;                 
};

u32 func_001491B8(This18CD* t) {
    u32 r = func_0014DDEC(t);
    if (data_0070B728) {
        void* mgr = data_00706E20;
        u32 h = t->m57c;
        void* a = (void*)func_0052FBA0((char*)mgr + 0x3dbbc, h);
        if (a && func_00584B1C(data_0070B728,a)) return 1;
    }
    return r;
}
