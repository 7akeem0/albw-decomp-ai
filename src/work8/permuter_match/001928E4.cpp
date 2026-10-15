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
    void change(u32 m, bool on) {
if (on) v |= m;
else v &= ~m;
}
    void set(u32 m) {
change(m, true);
}
    void reset(u32 m) {
change(m, false);
}
};

struct BitFlag16 {
    u16 v;
    void change(u16 m, bool on) {
if (on) v |= m;
else v &= ~m;
}
    void set(u16 m) {
change(m, true);
}
    void reset(u16 m) {
change(m, false);
}
};

extern char ro_006CD980[];
extern void* g_709D28;
extern void func_004A8304(void*, void*);
extern void func_001510A4(void*);

struct Obj1928E4 {
    char pad0[0x320];
    char pad320[0x40c - 0x320];
    void* m40C;
    char pad410[0x429 - 0x410];
    u8 m429;
};

void func_001928E4(Obj1928E4* self) {
  Obj1928E4 * perm_t70;
    if (self) { *(void**)self = ro_006CD980;
__schedule_barrier(); } else { if (self) { *(void**)self = ro_006CD980;
__schedule_barrier(); } else { *(void**)self = ro_006CD980;
 } }
    *(void**)((char*)self + 0x320) = ro_006CD980 + 0x54;
__schedule_barrier();
    if (self->m429 != 0) {
        func_004A8304(g_709D28, self->m40C);
        self->m429 = 0;
    }
    if (perm_t70) { perm_t70 = self; } else { perm_t70 = self; } func_001510A4(perm_t70);
}
