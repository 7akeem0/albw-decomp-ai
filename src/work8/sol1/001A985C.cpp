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
namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};typedef SafeStringBase<char> SafeString;}
typedef sead::SafeString SafeString;
void func_004D80A4(void*, u32, f32);
f32 func_004F898C();
void func_004FABDC(void*, u32, u32, u32);
void func_00150A84(void*, const SafeString&, s32);
struct This1A98 {
    char pad0[0x3dc];
    char m3dc[1];
    char pad1[0x3e0 - 0x3dd];
    f32 m3e0;
    char pad2[0x3e8 - 0x3e4];
    u32 m3e8;
};

void func_001A985C(This1A98* t) {
    func_004D80A4((char*)t + 0x3dc, t->m3e8, 0.03f);
    t->m3e0 = func_004F898C();
    func_004FABDC(t, 3, 0, 0);
    func_00150A84(t, SafeString("SE_Zora_DISAPPEAR"), 0);
}
