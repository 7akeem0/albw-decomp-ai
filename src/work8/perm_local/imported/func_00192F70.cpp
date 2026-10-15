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

struct S192F70 {
    char pad0[0x14];
    f32 m14;
    char pad18[0x20 - 0x18];
    u16 m20;
};

struct Obj192F70 {
    char pad0[0x438];
    f32 m438;
    char pad43C[0x448 - 0x43C];
    u8 m448;
};

bool func_00192F70(Obj192F70* self, S192F70* s) {
    u32 f = s->m20;
    u32 v;
    if ((f & 0x7E0) == 0x180) {
        v = 1;
    } else {
        if (f) { v = 0; } else { v = 0; } 
        if ((f & 0x1F) == 7) return false;
    }
    if (self->m438 < s->m14) {
        self->m438 = s->m14;
        self->m448 = (u8)v;
    }
    return true;
}
