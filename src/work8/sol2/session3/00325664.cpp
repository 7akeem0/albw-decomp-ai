

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
extern "C" void* func_0010BAB4(int);
extern "C" void* func_004EDC9C(void*);
extern "C" void func_004EDAD0(void*, void*);
extern "C" void func_004ED9C8(void*);
extern "C" void func_004A7F00(void*, void*, int);
extern void* data_00709D28;
static void set(char*p,u16 id){*(u16*)(p+0x2c)=id;}
void func_00325664(char* self) {
    char* p = (char*)func_0010BAB4(0x48);
    if (p) p = (char*)func_004EDC9C(p);
    *(void**)(self + 0x494) = p;
    *(u32*)(p + 0x18) = *(u32*)(self + 0x498);
    u32 v = *(u32*)(self + 0x2cc);
    func_004EDAD0(*(void**)(self + 0x494), &v);
    func_004ED9C8(*(void**)(self + 0x494));
    set(*(char**)(self+0x494),*(u16*)(self+0x54));
    func_004A7F00(data_00709D28, *(void**)(self + 0x494), 2);
    *(void**)(*(char**)(self + 0x494) + 0x28) = self + 0x4d4;
}
