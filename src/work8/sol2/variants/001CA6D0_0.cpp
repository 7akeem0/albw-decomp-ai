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
extern void* data_0070D858;
extern s32 func_00523774(void*, s32);
extern u32 func_00523910(void*);
extern u32 func_00523C08(void*);
extern s32 func_001E6948(void*);
s32 func_001CA6D0(void* self, s32 a, s32 b, s32 k) {
    if (k == 3) {
        s8 v = *(s8*)((char*)data_0070D858 + 0x2f5);
        if(v<0)return 0;*(u8*)((char*)data_0070D858+0x2f5)=0xff;return v;
    }
    if (k == 4) {
        if (func_00523774(data_0070D858, 0) == 0) return 1;
        *(u32*)((char*)self + 0x778) = func_00523910(data_0070D858);
        *(u32*)((char*)self + 0x77c) = func_00523C08(data_0070D858);
        return 0;
    }
    return func_001E6948(self);
}
