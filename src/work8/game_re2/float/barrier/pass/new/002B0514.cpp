

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
extern "C" void func_002AFEF0(void*, int, u32, int, int, f32);
template<class T0, class T1, class T2> inline u32 hlp0(T0& m, T1& self, T2& r2) { if (*(u8*)(m + 0x7fc) == 5) {
        char* p = m + 0x700;
        if (*(u16*)(0x84 + p) == 0) *(u16*)(p + 0x84) = *(u16*)(p + 0x82);
        m = *(char**)(self + 0x34);
        r2 = *(u16*)(m + 0x784);
    } else {
        r2 = 0x78;
    } return *(u32*)(*(char**)(self + 0x34) + 0x59c); }
void func_002B0514(char* self) {
    u32 r2;
    char* m = *(char**)(self + 0x34);
    u32 f = hlp0(m, self, r2);
    if (f & 0x20000000) func_002AFEF0(self, 0, 0, 0, 0, 0.8f);
    else func_002AFEF0(self, 0xa, r2, 1, 0, 0.8f);
}
