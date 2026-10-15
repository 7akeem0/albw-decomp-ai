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
u32 func_003E426C(void*, void*, u32, u32, u32, u32, u32, u32, u32);

struct This19 {
    char pad0[0x671];
    u8 m671;
    u8 m672;
    u8 m673;
    char pad1[0x7ac - 0x674];
    u32 m7ac;
    char pad2[0xa74 - 0x7b0];
    u32 mA74;
    u32 mA78;
    u32 mA7C;
};

struct Val{u8 v;Val(u32 n):v(n){}};
u32 func_0019AAFC(This19*t,void*arg1){Val z(0);t->m673=1;__schedule_barrier();u32 zz=z.v;func_003E426C(arg1,(void*)((char*)t+0x674),t->mA78,t->mA74,t->mA7C,zz,zz,zz,zz);t->m673=zz;t->m671=zz;t->m672=1;return t->m7ac;}
