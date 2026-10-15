

typedef signed char u8;
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
extern "C" f32 func_0052F864(void*);
extern "C" int func_002FCC74(void*, u16);
struct V20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void call(void*, int);
};
void func_003057E4(char* self) {
    if (*(u8*)(self + 0x4aa) == 0) return;
    if (*(u8*)(self + 0x4ab) != 0) {
        ((V20*)*(void**)(self + 0x4a0))->call(self + 0x498, 0);
        *(u8*)(self + 0x4ab) = 0;
        *(u8*)(self + 0x4aa) = 0;
    } else {
        u16 v = (u16)(u32)func_0052F864(self);
        if (func_002FCC74(*(void**)(self + 0x4a4), v) != 0) *(u8*)(self + 0x4aa) = 0;
    }
}
