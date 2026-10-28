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

extern __attribute__((weak)) void func_0065FE3C(void*, int);

inline void chaseF(f32* p, f32 t, f32 r) { f32 v = *p; *p = v + (t - v) * r; }
void func_002538C8(void* self) {
    f32* p = (f32*)((char*)self + 0x4b4);
    chaseF(p, 0.8f, 0.1f);
    *(f32*)((char*)self + 0x3d4) -= 0.2f;
    if (*(s32*)((char*)self + 0x420) > 0x14) func_0065FE3C((char*)self + 0x420, 7);
}
