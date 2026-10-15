

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


struct Vt44 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3();
    virtual int v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual int v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual int v25(); virtual int v26();
};
struct S25C464 : Vt44 { char pad[0x8e - 4]; u8 b8E; char pad2[0xb0 - 0x8f]; u32 mB0; };
extern "C" void* data_00712588;
extern "C" void func_002DF504(void*, S25C464*);
int func_0025C464(S25C464* self) {
    const u32& k = 5;
    if (self->mB0 != 0) return 0;
    self->mB0 = k; __schedule_barrier();
    if (0 != self->b8E) {
        self->v17();
        func_002DF504(data_00712588, self);
    }
    return 1;
}
