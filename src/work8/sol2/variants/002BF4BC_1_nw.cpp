

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
struct Obj14BF2 { char pad[0x16]; u16 m16; };
struct S2BF4BC : Vt44 { char pad[0x14-4]; Obj14BF2* m14; char pad2[0x38-0x18]; u32 m38; char pad3[0x5d-0x3c]; u8 b5d; };
extern "C" void func_00662B58(void*, int) ;
u16 mask(u16 f,u16 m){return f&m;}
void func_002BF4BC(S2BF4BC* self) {
    u16 f = self->m14->m16;
    if (mask(f,0x10)||mask(f,4)) self->b5d = 1;
    if (self->v21() != 0) return;
    if (self->b5d != 0 || !(self->m14->m16 & 8)) {
        func_00662B58((char*)self + 0x38, 2);
    }
}
