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

extern  void func_0065E398(void*, int);

struct P2{u32 a,b;};
struct Obj2213D0 {
    char pad0[0x8e4];
    u8 m8E4;
    char pad8e5[0xa68 - 0x8e5];
    u32 mA68;
    u32 mA6C;
};

void func_002213D0(Obj2213D0* self) {
    P2 v = *(P2*)&self->mA68;
    if (v.b > v.a) {
        self->mA68 = self->mA68 + 1;
        return;
    }
    if (self->m8E4 != 0) {
        func_0065E398((char*)self + 0x8c0, 6);
    } else {
        func_0065E398((char*)self + 0x8c0, 0xf);
    }
}
