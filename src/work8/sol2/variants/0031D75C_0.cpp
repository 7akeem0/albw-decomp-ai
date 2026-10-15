

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
extern "C" void func_00168E9C(void*, void*, int);
extern "C" void* func_002C11E8(void*, int, int, int);
extern "C" void func_0016898C(void*, void*);
struct Arr{char pad[0xc];volatile u32 n;u32 maximum;char*volatile data;};
void func_0031D75C(char* self) {
    func_00168E9C(*(void**)(self + 0x3c), *(void**)(self + 0x34), 0);
    if (!*(u8*)(self + 0x16a)) {
        char buf[0x60];
        char* rq = (char*)func_002C11E8(buf, 0, 0xa, 0);
        func_0016898C(*(void**)(self + 0x40), rq);
        char* o = *(char**)(self + 0x40);
        Arr*a=(Arr*)o;volatile u32 count=a->n;char*p=a->data;
        *(f32*)(p + 0x10) = 1.0f;
    }
}
