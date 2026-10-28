

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
extern "C" void func_002DFF7C(void*);
extern "C" u32 func_0019B04C(u32);
extern "C" void func_004C43E0(void*, void*);
extern u32 ro_00693160;
extern void* data_00706E20;
struct impl_00288224B1{u32 v;impl_00288224B1(u32 x):v(x){}};
template<class T0> inline void hlp0(T0& buf) { *(u32*)(buf + 0x2c0) = 0;
    func_002DFF7C(buf);
    *(u32*)buf = func_0019B04C(ro_00693160); }
void impl_00288224(char* self,impl_00288224B1 p1,u16 a2){u32 a1=p1.v;
    char buf[0x2c8];
    *(u32*)(buf + 0x20) = 0; *(u32*)(buf + 0x24) = 0; *(u32*)(buf + 0x1c) = 0;
    *(u32*)(buf + 0x48) = 0; *(u32*)(buf + 0x4c) = 0; hlp0(buf);
     *(u16*)(buf + 0x50) = a2;
    *(u16*)(buf + 0x28) = 1;
    *(u32*)(buf + 4) = *(u32*)(self);
    *(u32*)(buf + 8) = *(u32*)(self + 4);
    *(u32*)(buf + 0xc) = *(u32*)(self + 8);
    *(u32*)(buf + 0x20) = a1;
    func_004C43E0(data_00706E20, buf);
}
void func_00288224(char* self, u32 a1, u16 a2){impl_00288224(self,a1,a2);}
