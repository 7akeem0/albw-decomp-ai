

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
extern "C" int func_0058AB74(void*);
extern "C" int func_0058A8F0(void*);
extern "C" void func_004FC07C(void*, int, int, int);
extern "C" void __attribute__((weak)) func_006640EC(void*, int);
struct Pair { u32 cur, max; };
bool step(Pair*q){Pair p = *q;if(p.cur < p.max){q->cur=p.cur+1;return true;}return false;}
void func_002F653C(char*self){if(step((Pair*)(self+0xb0c))){if(func_0058AB74(self)==0x25&&func_0058A8F0(self)!=0)func_004FC07C(self,0x24,-1,0);}else func_006640EC(self+0x8c8,0x20);}
