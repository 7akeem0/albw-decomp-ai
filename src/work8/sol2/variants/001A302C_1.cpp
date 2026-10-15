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
extern void func_004FC178(void*);
extern void func_004F9554(void*, int, int, int);
extern void func_004F88A0(void*, u32);
extern s32 func_0058AB74(void*);
extern void func_004FC07C(void*, int, int, int);
void clear(u8*p,u8 zero){p[0x44]=zero;}
u32 bits(const u32&n,const u32&m){return n|m;}
void func_001A302C(void* self) {
clear(*(u8**)((char*)self+0x968),0);
    *(u32*)((char*)self+0x59c)=bits(*(u32*)((char*)self+0x59c),4);
    func_004FC178(self);
    func_004F9554(*(void**)((char*)self + 0x964), 0, 0, 1);
    func_004F9554(*(void**)((char*)self + 0x430), 0, 0, 1);
    func_004F9554(*(void**)((char*)self + 0x434), 0, 0, 1);
    func_004F88A0(self, *(u32*)((char*)self + 0x3a4));
    if (func_0058AB74(self) == 4) func_004FC07C(self, 1, 8, 0);
    else func_004FC07C(self, 1, -1, 0);
    *(u8*)((char*)self + 0x9ca) = 1;
}
