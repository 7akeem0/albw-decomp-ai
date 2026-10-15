

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
extern "C" void* func_0010DA7C(void*, int, int);
extern "C" void* func_0014D9C4(void*);
void func_002D40FC(void* self) {
    char* b = (char*)func_0010DA7C(self, 0, 3);
    *(void**)b = (void*)0x6DD688;
    *(u32*)(b + 0x1c) = 0;
    *(u32*)(b + 0x20) = 0;
    *(f32*)(b + 0x24) = 0.0f;
    *(f32*)(b + 0x28) = 0.0f;
    char* r = (char*)func_0014D9C4(b + 0x30) - 0x30;
    *(u8*)(r + 0x38) = 0; *(u8*)(r + 0x39) = 0;
    *(f32*)(0x10 + r) = 600.0f;
    *(f32*)(r + 0x14) = 1.0f;
    *(u32*)(r + 0x18) = 0;
    *(u32*)(r + 0x1c) = 0;
    *(u32*)(r + 0x20) = 0;
    *(f32*)(r + 0x24) = 0.0f;
    *(f32*)(r + 0x34) = 0.0f;
    *(f32*)(r + 0x30) = 0.0f;
}
