

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
struct S267968 { char pad[0x59c]; u32 m59c; };
extern "C" void* data_00708998;
extern "C" void func_004FABDC(void*, int, int, int);
extern "C" void func_004ED46C(void*, int);
extern "C" void func_0053A4CC(void*, void*, int);
template<class T0> inline void hlp0(T0 self) { self->m59c &= ~0x80; }
void func_00267968(S267968* self) {
    func_004FABDC(self, 6, -1, 0);
    func_004ED46C(data_00708998, 2);
    hlp0(self); 
    u8 buf[0x10];
    func_0053A4CC(self, buf, 0);
}
