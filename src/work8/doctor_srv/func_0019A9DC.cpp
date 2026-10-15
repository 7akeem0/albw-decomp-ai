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

extern void func_001E05CC(void*, int);

void func_0019A9DC(void* self) {
    if (*(u8*)((char*)self + 0x48) == 0) return;
    if (*(u32*)((char*)self + 0x30) != 0) {
        int r5 = *(u32*)((char*)self + 0x34);
        char* r4 = (char*)(*(u32*)((char*)self + 0x2c) - r5);
        __schedule_barrier(); char* r0f = (char*)self + 0x28;
        char* r6 = r0f - r5;
        while (r4 != r6) {
            char * r4_c5 = r4;
            func_001E05CC(r4_c5, 5);
            r4 = (char*)(*(u32*)(r4 + r5 + 4) - r5);
        }
    }
    *(u8*)((char*)self + 0x48) = 0;
}
