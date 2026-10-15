

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
    virtual int v16(); virtual void v17(); virtual void v18(int);
    virtual void v19(); virtual void v20(); virtual int v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual int v25(); virtual int v26();
};
struct S25D5C8 : Vt44 { char pad[0x8d - 4]; u8 b8D; u8 b8E; u8 b8F; char pad2[0xa8 - 0x90]; u32 m10A8; };
extern "C" void func_0049BC70(S25D5C8*, int);
extern "C" void func_0010A7BC(void*);
void func_0025D5C8(S25D5C8* self,int incoming5) {
    if (self->b8D != 0) { func_0049BC70(self, 1); return; }
    int value5=incoming5;self->v18(value5);
    if (self->b8F != 0) {
        self->b8E = 1;
        func_0010A7BC((char*)self + 0xa8);
        self->b8F = 0;
    }
}
