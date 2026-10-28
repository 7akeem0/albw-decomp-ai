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

struct Sub9A0 { char pad[0x61]; u8 m61; };
struct Obj1AE5E4 {
    char pad0[0x3dc];
    f32 m3DC;
    char pad3e0[0x3e4 - 0x3e0];
    f32 m3E4;
    char pad3e8[0x909 - 0x3e8];
    u8 m909;
    char pad90a[0x994 - 0x90a];
    char* m994;
    char pad998[0x99C - 0x998];
    void* m99C;
    Sub9A0* m9A0;
    char pad9a4[0x9DC - 0x9a4];
    f32 m9DC;
};

template<class T0> inline void hlp0(T0 self) { self->m3DC = 0.0f;
    self->m3E4 = 0.0f; }
void func_001AE5E4(Obj1AE5E4* self, u32 a) {
    if (a != 0xa && 4 != a && 0 != self->m99C) {
        self->m9DC = -*(f32*)(self->m994 + 8);
    }
    if (self->m9A0) self->m9A0->m61 = 0;
    hlp0(self); 
    self->m909 = 1;
}
