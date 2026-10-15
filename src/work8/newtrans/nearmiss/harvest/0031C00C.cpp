#pragma O3
#pragma Otime


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
struct Obj20C { char pad[0x68]; u32 m68; };
struct S31C00C { void* m0; char pad[0x10-4]; void* m10; char pad2[0x20-0x14]; Obj20C* m20; char pad3[0x2c-0x24]; u32 m2C; };
extern "C" char ro_006E0690[];
extern "C" void* data_0070B800;
extern "C" void func_0012DEC8(void*, u32, int);
extern "C" unsigned func_004A1520(S31C00C*);


struct P_G6C_func_0031C00C_0 {
  virtual ~P_G6C_func_0031C00C_0();
  virtual void vf_P_G6C_func_0031C00C_0_0();
  virtual void vf_P_G6C_func_0031C00C_0_1();
  char tail_pad[12];
};
struct P_G6C_func_0031C00C_10 {
  virtual void vf_P_G6C_func_0031C00C_10_0();
};
struct B_func_004A1520 : public P_G6C_func_0031C00C_0, public P_G6C_func_0031C00C_10 {
  virtual ~B_func_004A1520();
};
struct G6C_func_0031C00C : public B_func_004A1520 {
  virtual ~G6C_func_0031C00C();
};
G6C_func_0031C00C::~G6C_func_0031C00C() {
int b = 0;

    if (((S31C00C*)(unsigned)this)->m20 != 0 && (((S31C00C*)(unsigned)this)->m20->m68 & 0x18)) b = 1;

    func_0012DEC8(data_0070B800, ((S31C00C*)(unsigned)this)->m2C, b);
}
