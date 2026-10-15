

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
extern "C" void func_004B9958(void*, u32);
struct V11 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void call(); };
static char*at29(char*arr,u32 i){if(*(u32*)arr>i)return *(char**)(arr+4)+i*8;return *(char**)(arr+4);}
void* func_0029E18C(char* self, u32 a1) {
    char* o = *(char**)(self + 8);
    ((V11*)o)->call();
    char* arr = *(char**)(self + 4);
    char*e=at29(arr,a1);
    u32 fn = *(u32*)(e + 4);
    char* r = (char*)((void*(*)(void*))fn)(*(void**)(self + 8));
    *(void**)(self + 0xc) = r;
    *(u16*)(self + 0x10) = a1;
    char* arr2 = *(char**)(self + 4);
    u32 n = *(u32*)arr2;
    char* b = *(char**)(arr2 + 4);
    if (n > a1) b = b + a1 * 8;
    u32 bit = 1u << *(u32*)b;
    func_004B9958(r, bit);
    return *(void**)(self + 0xc);
}
