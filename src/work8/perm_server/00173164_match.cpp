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

extern void func_006589D0(void*, int);
extern void func_00172CC0(void*);

void func_00173164(void* self) {
    u32 a = *(u32*)((char*)self + 0x430);
    u32 b = *(u32*)((char*)self + 0x434);
    if (a < b) {
        *(u32*)((char*)self + 0x430) = a + 1; __schedule_barrier();
        *(f32*)((char*)self + 0x3d4) -= 0.02f;
        f32 d = *(f32*)((char*)self + 0x450) - *(f32*)((char*)self + 0x448);
        *(f32*)((char*)self + 0x450) = d;
        *(f32*)(*(char**)((char*)self + 0x43c) + 0x158) = d;
    } else {
        func_006589D0((char*)self + 0x40c, 2);
    }
    func_00172CC0(self);
}
