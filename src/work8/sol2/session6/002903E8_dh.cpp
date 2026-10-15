

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
extern "C" int func_0052E8A0(void*);
extern "C" int func_0053FD30(void*, int);
extern "C" void* func_002D55D0(void*, int);
static void payload6(char*p,const char*s,u32 one){u8 kind=*(u8*)s;s16 id=*(s16*)(s+8);u32 word=*(u32*)(s+4);*(u8*)p=kind;*(u32*)(p+4)=word;*(s16*)(p+8)=id;*(u8*)(p+0xa)=one+((s32)id>>31);}
int func_002903E8(char* self, char* a1) {
    if (func_0052E8A0(*(void**)(self + 0x10)) != 0) return 0;
    if (func_0053FD30(self, 0) == 0) return 0;
    char* r = (char*)func_002D55D0(*(void**)(self + 0x48), 0x87);
    if (!r) return 0;
    *(u32*)(r + 8) = 0; 
    *(u8*)(r + 5) = 0; 
payload6(self+0x154,a1,1);
    return 1;
}
