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

extern void* data_0070FB60;
extern u8 data_0070E230;
extern s32 func_0053F9B8(void*);
extern s32 func_001E68F0(void*, u32);

struct Obj1CB3B4 {
    char pad[0x476];
    u8 m476;
};

s32 func_001CB3B4(Obj1CB3B4* self, u32 x) {
    s32 r=func_0053F9B8(data_0070FB60);if(r==0)return r;
    self->m476 = 1;
    r=func_001E68F0(self,x);if(r==0xb)data_0070E230=1;return r;
}
