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
extern s32 func_0058AB74(void*);
extern s32 func_0058A8F0(void*);
extern void func_004FABDC(void*, int, int, int);
extern void func_0036C45C(void*);
struct FlagsSelf {char p[0x59c];u32 flags;char q[0x9d4-0x5a0];u32 state;};
static void clearFlags(FlagsSelf*s){u32 f=s->flags;f &=~1u;__schedule_barrier();f &=~2u;s->flags=f;}
static void setFlag(FlagsSelf*s){s->flags |= 0x2000;}
void func_00221234(void* self) {
    if (func_0058AB74(self) == 0x16 && func_0058A8F0(self) != 0)
        func_004FABDC(self, 0x17, -1, 0);
    func_0036C45C((char*)self + 0x8e8);
    u64 v = *(u64*)((char*)self + 0x9ac);
    u32 b = (u32)(v >> 32); __schedule_barrier();
    u32 a = (u32)v;
    if(a>=b)clearFlags((FlagsSelf*)self);
    if(((FlagsSelf*)self)->state==6)setFlag((FlagsSelf*)self);
}
