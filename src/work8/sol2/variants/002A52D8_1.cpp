

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
extern "C" int func_0034C8F0(void*, void*, int);
extern "C" void func_002917A4(void*,f32,void*,int);
extern "C" int func_002A405C(void*);
extern "C" void func_00662128(void*, int);
extern void* data_0070FB60;
int func_002A52D8(char* self, int a1) {
    if (func_0034C8F0(*(void**)(self + 0x43c), *(void**)(self + 0xbf4), a1) == 0) return 0;
    func_002917A4(data_0070FB60,0.5f,*(char**)(self+0x43c)+0x14,0);
    if (func_002A405C(self) != 0) {
        *(u8*)(self + 0xb98) = 1;
        *(u8*)(self + 0xb91) = 0;
        func_00662128(self + 0x9e0, 4);
    }
    return 1;
}
