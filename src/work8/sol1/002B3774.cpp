

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
extern "C" int func_0051D27C(void*,u32,int);
extern "C" void func_0014FAFC(void*,f32,u32);
extern "C" void func_00662638(void*, int);
struct Pair { u32 cur, max; };
void func_002B3774(char* self) {
    if (func_0051D27C(self + 0x3e8,*(u32*)(self + 0x95c),0x5b05b00) != 0) {
        *(u8*)(self + 0x984) = 0;
        func_0014FAFC(self,0.12f,*(u32*)(0x3e8 + self));
        Pair p = *(Pair*)(self + 0x934);
        if (p.cur < p.max) *(u32*)(self + 0x934) = p.cur + 1;
        else func_00662638(self + 0x8ec, 3); __schedule_barrier();
        return;
    }
    Pair p2 = *(Pair*)(self + 0x934);
    if (p2.cur < p2.max) *(u32*)(self + 0x934) = p2.cur + 1;
    if (*(u8*)(self + 0x984) != 0) {
        *(f32*)(self + 0x3dc) = 0.0f;
        *(f32*)(self + 0x3e0) = 0.0f;
        *(f32*)(self + 0x3e4) = 0.0f;
        return;
    }
    func_0014FAFC(self,0.12f,*(u32*)(self + 0x3e8));
}
