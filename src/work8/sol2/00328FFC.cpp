

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
extern "C" void func_0036C42C(void*);
extern "C" void func_00115C54(void*, void*, void*);
struct ctx_00328FFC_1B1{void* v;ctx_00328FFC_1B1(void* n):v(n){}};
void ctx_00328FFC_1(void* a0,ctx_00328FFC_1B1 a1,void* a2);

extern "C" void func_004FC07C(void*, int, int, int);
extern "C" void func_004FAB60(void*, int, int);
extern Vec3 bss_007381A8;
Vec3*setGet(Vec3*out,Vec3*in,Vec3*bias){func_00115C54(out,in,bias);return out;}
void func_00328FFC(char* self) {
    *(f32*)(self + 0x3dc) = 0.0f;
    *(f32*)(self + 0x3e0) = 0.0f;
    *(f32*)(self + 0x3e4) = 0.0f;
    func_0036C42C(self + 0xaa0);
    Vec3*r5=setGet((Vec3*)(self+0xc24),(Vec3*)(self+0x3d0),&bss_007381A8);
    *(void**)(self+0xac8)=(Vec3*)(self+0xc24);
    *(u8*)(self + 0xb94) = 2;
    *(u8*)(self + 0xc93) = 0;
    func_004FC07C(self, 6, 8, 0);
    func_004FAB60(self, 0, 0);
}

void ctx_00328FFC_1(void* a0,ctx_00328FFC_1B1 a1,void* a2){func_00115C54(a0,a1.v,a2);}
