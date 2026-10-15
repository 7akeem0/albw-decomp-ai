

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
struct S314B0C { char pad[4]; };
extern "C" int func_00588BF0(S314B0C*, int);
extern "C" void func_004BD280(S314B0C*, int, int);
void func_00314B0C(S314B0C* self, int input, int a2) {
    int k=input;
    if (k == 0) { if (func_00588BF0(self, 0) == 0) k = 5; }
    else if (k == 1) { if (func_00588BF0(self, 0) == 0) k = 6; }
    func_004BD280(self, k, a2);
}
