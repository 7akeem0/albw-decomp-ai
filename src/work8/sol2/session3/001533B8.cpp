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

extern void func_004FABDC(void*, int, int, int);
extern void func_004F88A0(void*, u32);

struct Sub424_33B8 { char pad[0x2c]; u32 m2C; };

struct Obj1533B8 {
    char pad0[0x424];
    Sub424_33B8* m424;
    char pad428[0x8f4 - 0x428];
    u32 m8F4;
    char pad8F8[0x904-0x8f8];u32 m904v;
};

void func_001533B8(Obj1533B8* self) {
    func_004FABDC(self, 0, -1, 0);
    func_004F88A0(self, self->m904v);
    const f32 rate=0.5f;self->m424->m2C |= 0x20000; __schedule_barrier();
    self->m8F4 = 0;
    *(f32*)((char*)self + 0x574) = rate;
}
