

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
extern "C" f32 func_0054DE3C(void*, int, int);
extern "C" void func_004356B4(void*);
void set(char*p,f32 x,f32 y,u32 z){p+=4;*(f32*)p=x;*(f32*)(p+4)=y;*(u32*)(p+8)=z;}
void func_002E4DE8(char* self) {
    char* r6 = self + 0x8bc;
    char* p = *(char**)(self+0x8bc);
    f32 x = *(f32*)(self + 0x3d0);
    f32 y = func_0054DE3C(self, 1, 1) + *(f32*)(self + 0x3d4);
set(p,x,y,*(u32*)(self+0x3d8));
    func_004356B4(*(void**)r6);
    char* q = *(char**)(self+0x8c0);
    f32 x2 = *(f32*)(self + 0x3d0);
    f32 y2 = func_0054DE3C(self, 2, 1) + *(f32*)(self + 0x3d4);
set(q,x2,y2,*(u32*)(self+0x3d8));
    func_004356B4(*(void**)(self + 0x8c0));
}
