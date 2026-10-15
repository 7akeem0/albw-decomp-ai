

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
    void set(u16 mask);
};

void Flag16::set(u16 mask){*this=Flag16(v|mask);}struct Vec3 { f32 x,y,z; void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
struct Child6{char pad[0x16];Flag16 flags;};struct S2BFA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    char g[0x14-4];
    Child6*m14;
    char g2[0x5c-0x18];
    u8 b5C; u8 b5D; u8 b5E;
};
void func_002BFA1C(S2BFA* p) {
    if (p->b5C) {
        Flag16*q=&p->m14->flags;q->set(0x40);
    }
    bool v = p->b5D;
    p->b5E = 0;
    if (v) p->v20(); else p->v16();
}
