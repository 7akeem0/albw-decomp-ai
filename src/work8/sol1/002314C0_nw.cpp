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
extern void func_00466B18(u32);
extern void func_00447390(u32);
extern void func_0043E11C(void*) ;
extern void func_00231524(void*);
struct St2314 { u16 ec; u16 ee; u32 pad; u32 f4; };
static inline void phase2314(void* const& self,u16 e,u16 c,u32 const& v){    St2314* s = (St2314*)((char*)self + 0xec);
    s->f4 = v;
    s->ee=e;
    s->ec=c;
    func_00231524(s);
}
void func_002314C0(void* self) {
    u32 a = *(u32*)((char*)self + 0x148);
    if (a != 0) {
        u32 b = *(u32*)((char*)self + 0x150);
        if (a == b) {
            func_00466B18(b);
        } else {
            u32 c = *(u32*)((char*)self + 0x154);
            if (a == c) func_00447390(c);
        }
    }
    func_0043E11C(self);
    phase2314(self,0,0,*(u32*)((char*)self+0x1c));
}
