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
extern void* data_0070FB60;
extern u8 data_00711EB0[];
struct SafeString{virtual void vf();const char*c;SafeString(const char*p):c(p){}};
u32 func_00588090(void*, u32);
void func_004EB908(void*, u32, u32);
void func_0025A64C(void*);
void func_00296B84(void*, const SafeString&, u32);

void func_002585A0(void) {
    if (!func_00588090(data_00711F50, 0x1e)) return;
    if (*(f32*)(*(u32*)((char*)data_0070FB60 + 0x1c) + 4) >= 1.0f) return;
    func_004EB908(data_00711F50, 0x3c, 1);
    func_0025A64C(data_00711F50);
    func_00296B84(data_00711F50,SafeString((const char*)*(u32*)(data_00711EB0+0xc)),0x1e);
}
