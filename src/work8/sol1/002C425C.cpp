

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
extern "C" char* func_004A1AEC(void*);
extern "C" void func_00352908(void*, void*);
struct V12 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual u32 callA(); virtual u32 callB(); };
void func_002C425C(char* self, void* a1, u32 a2, u32 a3) {
    char buf[0x14];
    char*p=(char*)func_004A1AEC(buf); char*q=p;
    *(u32*)(p + 0xc) = 0;
    *(u32*)(p + 0x10) = 0;
    *(u32*)(buf + 0xc) = a2;
    *(u32*)(buf + 0x10) = a3;
    *(void**)(self + 0x2c) = a1;
    *(u32*)buf = ((V12*)self)->callA();
    *(u32*)(buf + 8) = ((V12*)self)->callB();
    func_00352908(self + 4, buf);
}
