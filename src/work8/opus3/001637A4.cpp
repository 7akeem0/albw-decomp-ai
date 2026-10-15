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
extern void func_00163A30(void*, int);
extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern void func_00289FCC(void*);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
void func_001637A4(void* self) {
    char* r0 = (char*)self + 0x4e4;
    f32 v = 0.8f;
    *(f32*)(r0) = v;
    *(f32*)(r0 + 4) = v;
    *(f32*)(r0 + 8) = v; __schedule_barrier();
    *(f32*)((char*)self + 0x3dc) = 0.0f;
    *(f32*)((char*)self + 0x3e4) = 0.0f;
    func_004FABDC(self, 4, 0, 0);
    func_00163A30(self, 0);
    char* p = (char*)func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)((char*)self + 0x8f8));
    if (p != 0) func_00289FCC(p);
    ((BitFlag32*)((char*)self + 0x59c))->reset(0x80);
    ((BitFlag32*)((char*)self + 0x59c))->set(0x4000);
    func_00150A84(self, sead::SafeString("SE_Omugai_SHELL_OUT"), 0);
}
