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
extern void func_0014F4EC(void*);
extern void func_00150688(void*, void*, u32);
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
extern void func_00150A84(void*, const sead::SafeString&, s32);
void func_001C643C(void* self) {
    func_0014F4EC(*(void**)((char*)self + 0x40c));
    func_00150688(self, (char*)self + 0x43c, *(u32*)((char*)self + 0x3a4));
    char* v = (char*)self + 0x4a4; __schedule_barrier();
    *(f32*)(v) = 0.0f;
    *(f32*)(v + 4) = 0.0f;
    *(f32*)(v + 8) = 0.0f;
    func_00150A84(self, sead::SafeString("SE_OBJ_RECOVER_FROM_ICE"), 0);
}
