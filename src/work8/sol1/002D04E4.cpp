

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
extern "C" void func_00151148(void*, int);
extern "C" void func_004A3700(void*);
struct Handle5{char*p;u32 id;};
static void kill5(Handle5*h5){__schedule_barrier();char*o=h5->p;if(o&&*(u32*)(o+0x1c)==h5->id){*(u32*)(o+0x3c)=(*(u32*)(o+0x3c)&~0x44)|8;func_004A3700(o);}}
void func_002D04E4(char* self) {
    u32 v = *(s16*)(self + 0x30);
    *(u32*)(self + 0x4cc) = v;
    if (!v) {
        func_00151148(*(void**)(self + 0x44c), 1);
        *(f32*)(self + 0x3e0) = -0.5f;
    }
    *(f32*)(self + 0x3ac) = -1.0f;
    __schedule_barrier();Handle5*h5=(Handle5*)(self+0x4c4);kill5(h5);
}
