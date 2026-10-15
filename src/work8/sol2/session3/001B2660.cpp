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
u32 func_0058AB74(void*);
u32 func_0058A8F0(void*);
void func_004FABDC(void*, u32, u32, u32);
void* func_0058A7D4(void*);
u32 func_00111A64(void*);
__attribute__((weak)) void func_0065B158(void*, u32);
struct This1B26 {
    char pad0[0x59c];
    u32 m59c;
    char pad1[0x8bc - 0x5a0];
    char m8bc[1];
};

static void clear(This1B26*t){t->m59c &=~0x4000;}
static void issue(This1B26*t,u32 test){if(test&1)func_0065B158((char*)t+0x8bc,0);else func_0065B158((char*)t+0x8bc,2);}
void func_001B2660(This1B26* t) {
    if (func_0058AB74(t) != 9) {
        func_004FABDC(t, 9, 0, 0);
        return;
    }
    if (func_0058A8F0(t)) {
        clear(t);
        issue(t,func_00111A64(func_0058A7D4(t)));
    }
}
