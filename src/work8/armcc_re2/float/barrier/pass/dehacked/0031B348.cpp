

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
struct X31B3 { char pad[0x44]; u8 b44; };
struct Y31B3 { char pad[0x70]; u8 b70; };
struct S31B3 { char pad[0x2c]; Y31B3* m2C; char g[0x48-0x30]; X31B3* m48; };
struct Mask5{u32 v;Mask5(u32 n):v(n){}};
static bool cur5(u8 v,const u8& mask){return (v&mask)!=0;}
static void set5(X31B3*x,u8 value){x->b44=value;}
template<class T0, class T1, class T2, class T3> inline void hlp0(T0& x, T1& value5, T2& bit5, T3& y) { x->b44=value5;if(bit5)y->b70|=2; }
void func_0031B348(S31B3* p, u32 on) {
    X31B3* x = p->m48;
    if (!x) return;
    Y31B3* y = p->m2C;
    if (((bool)(cur5(x->b44,1))) == on) return;
    u8 value5=(u8)((x->b44&0xfe)|on);u32 bit5=on;hlp0(x, value5, bit5, y);
}
