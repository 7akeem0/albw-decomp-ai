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
extern char ro_006F5988[];
extern void* data_00711F50;
struct SafeString{virtual void vf();const char* c;SafeString(const char* s):c(s){}};
void func_0034C8F0(u32, u32, void*);
u32 func_004EA9E4(void*, const SafeString&, void*);
struct This1B06 {
    char pad0[0xa14];
    u32 mA14;                 
    char pad1[0xa24 - 0xa18];
    u32 mA24;                 
};
struct Arg1B06 {
    char pad0[0x10];
    char m10[1];              
    char pad1[0x2c - 0x11];
    u32 m2c;                  
};

bool func_001B06C4(This1B06* t, Arg1B06* a) {
    func_0034C8F0(t->mA14, 0, a);
    func_004EA9E4(data_00711F50, SafeString("SE_PL_Sword_HIT_SWORD"), (char*)a + 0x10);
    if (a->m2c) t->mA24 = *(s8*)(a->m2c + 1);
    return true;
}
