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

struct Obj178D58 {
    char pad0[8];
    void* m8;
    char padC[0x22 - 0xc];
    u16 m22;
    char pad24[0x2b - 0x24];
    u8 m2B;
    char pad2c[0x32 - 0x2c];
    u16 m32;
    u16 m34;
};

void func_00178D58(Obj178D58* self) {
    self->m32 = (u16)(self->m32 + 1);
    if (self->m34 > self->m32) return;
    self->m2B = 1; __schedule_barrier();
    u32 i = self->m22;
    if (i == 0) return;
    u16* arr = (u16*)self->m8;
    for (; i != 0; i--) {
        if (arr[i] == 0xa) {
            self->m22 = (u16)i;
            return;
        }
    }
}
