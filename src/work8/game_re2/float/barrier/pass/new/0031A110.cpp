

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
struct S31A110 { char pad[0x3d4]; f32 m3d4; char pad2[0x420-0x3d8]; s32 m420; char pad3[0x478-0x424]; f32 v478; char pad4[0x7c4-0x47c]; u8 b7C4; };
template<class T0> inline void hlp0(T0 p) { *p += (0.8f - *p) * 0.1f; }
void func_0031A110(S31A110* self) {
    if (0x14 < self->m420) { self->b7C4 = 1; return; }
    f32* p = &self->v478;
    hlp0(p); 
    self->m3d4 -= 0.2f;
}
