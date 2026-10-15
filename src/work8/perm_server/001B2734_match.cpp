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

extern void func_004FC07C(void*, int, int, int);

struct Obj1B2734 {
    char pad0[0x3dc];
    f32 m3DC;
    char pad3e0[0x3e4 - 0x3e0];
    f32 m3E4;
    char pad3e8[0x4f0 - 0x3e8];
    f32 m4F0;
    char pad4f4[0x908 - 0x4f4];
    u32 m908;
    f32 m90C;
};

void func_001B2734(Obj1B2734* self) {
    self->m908 = 0;
    self->m90C = 0.0f;
    func_004FC07C(self, 0, -1, 0);
    self->m3DC = 0.0f; __schedule_barrier();
    self->m3E4 = 0.0f;
    self->m4F0 = 1.0f;
}
