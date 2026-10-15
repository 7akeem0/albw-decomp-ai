

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Control2317 { u16 current, max; u32 pad4, param; };

struct Flag16 {
    u16 v;
    Flag16(){}
    Flag16(u16 n):v(n){}
    void reset(u16 mask){*this = Flag16((u16)(v & ~mask));}
    void set(u16 mask){*this = Flag16((u16)(v | mask));}
};

struct Vec3 { f32 x,y,z; void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
struct S2E29F8 { char pad[4]; };
extern "C" void* data_0070FB60;
extern "C" void func_00556AA8(void*, int);
extern "C" u32 func_004F031C(void);
extern "C" void func_002E2A54(S2E29F8*, u32, u32);
void func_002E29F8(S2E29F8* self) {
    u32 a = 0, b = 0;
    void* g = data_0070FB60;
    if (g != 0) {
        func_00556AA8(g, 2);
        a = func_004F031C();
        func_00556AA8(g, 1);
        b = func_004F031C();
    }
    u32 a_c1 = a;
    func_002E2A54(self, a_c1, b);
}
