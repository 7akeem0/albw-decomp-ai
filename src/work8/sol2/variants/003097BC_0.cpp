

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
extern "C" void func_0014E2A0(void*, void*, void*, int, void*, int);
extern "C" void func_004CEAF0(void*);
s32 clamp(s32 n,s32 lo){if(n<lo)n=lo;return n;}
void func_003097BC(char* self) {
    if (*(u8*)(self + 0x435)) return;
    s32 n=clamp(*(u32*)(self+0x430)-1,0);
    *(u32*)(self + 0x430) = n;
    func_0014E2A0(self, *(void**)(self + 0x41c), self + 0x438, 0x1008, 0, 0);
    func_0014E2A0(self, *(void**)(self + 0x418), self + 0x438, 0x200, self + 0x448, 0);
    func_004CEAF0(*(void**)(self + 0x40c));
}
