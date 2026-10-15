

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
struct V3u { u32 a, b, c; };
extern "C" void func_004D7F70(void*, u32);
extern "C" void func_00115C54(void*, void*, void*);
extern "C" void func_004D7FBC(void*, void*, u32, u32, f32);
extern "C" void func_00261564(void*, void*, void*);
static void addVec(void* d,void* source,void* third){func_00115C54(d,source,third);}
void func_002E19EC(char* self, char* a1, void* a2) {
    *(u32*)(a1 + 0x18) = *(u32*)(self + 0x2c);
    char tmp[0x10];
    *(V3u*)tmp = *(V3u*)(self + 0x48);
    func_004D7F70(tmp, *(u32*)(self + 0xc));
    addVec(a1+0xc,self+0x20,tmp);
    f32 scale=*(f32*)(self+0x38);
    u32 left=*(u32*)(self+8);u32 right=*(u32*)(self+12);
    func_004D7FBC(a1, a1 + 0xc, left,right,scale);
    func_00261564(self, a1, a2);
}

