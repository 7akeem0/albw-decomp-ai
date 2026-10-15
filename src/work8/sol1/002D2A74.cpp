

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
extern "C" void func_002D3428(void*, int);
extern void* data_00709DF8;
void func_002D2A74(char* self, int a1) {
    u8 v = 0;
    s8 t = *(s8*)((char*)data_00709DF8 + 0x18);
    if(t!=14&&t!=20)goto done5;
    u32 x=*(u32*)(*(char**)self+0x4b0);
    if(x==3){if(*(s8*)(self+0xc8)!=0)goto done5;}else if(x==4){if(*(s8*)(self+0xc8)!=1)goto done5;}else goto done5;
    v=2;
    done5:
    u8 n = (u8)(v + a1);
    *(u8*)(self + 0x24) = n;
    if (n != a1) func_002D3428(self, a1);
}
