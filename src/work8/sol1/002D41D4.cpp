

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
struct OnValue{bool v;};
static inline bool enabledPod(OnValue x){return x.v!=0;}
struct C2D41 { char pad[0x164]; u32 m164; void change(u32 m, bool on){ if(on) m164 |= m; else m164 &= ~m; } void change2(u32 m,bool on){OnValue val={(bool)on};if(enabledPod(val))m164|=m;else m164&=~m;} };
struct S2D41 { char pad[4]; C2D41* child; };
extern "C" void func_004CF864(C2D41*, s32, s32);
void func_002D41D4(S2D41* p, bool on) {
    p->child->change(0x200000, on);
    p->child->change2(1, on);
    func_004CF864(p->child, on, -1);
}
