

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
struct M34E { char pad[0x508]; s16 m508; };
struct S2AD8A0 { char pad[0x34]; M34E* m34; char pad2[0xa4-0x38]; s8 bA4; };
extern "C" void func_002B193C(S2AD8A0*, int, float);
extern "C" void func_002AED24(S2AD8A0*);
extern "C" void func_002B0D7C(S2AD8A0*, int, int, int, float);
static inline void call(S2AD8A0*p,const int&x,s8 a,const float&f){func_002B0D7C(p,0x10,x,a,f);}
void func_002AD8A0(S2AD8A0* self) {
    if (self->m34->m508 <= 0) { func_002B193C(self, 0x10, 1.0f); return; }
    func_002AED24(self);
    s8 a = self->bA4;
    call(self,0xc,a,0.3f);
}
