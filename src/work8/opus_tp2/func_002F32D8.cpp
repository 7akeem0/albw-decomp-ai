

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
struct Req5C4 { char p[0x5c]; };
struct S2F2474 { char pad[0x59c]; u32 m59C; char pad2[0xb7c-0x5a0]; u32 mB7C; char pad3[0xdb4-0xb80]; void* mDB4; char pad4[0xe0e-0xdb8]; u8 bE0E; };
extern "C" void func_002EEB98(S2F2474*);
extern "C" Req5C4* func_002C11E8(Req5C4*, int, int, int);
extern "C" void func_0016898C(void*, Req5C4*);
void func_002F2474(S2F2474* self) {
    self->bE0E = 1;
    func_002EEB98(self);
    ((Flag32*)&self->m59C)->reset(7);
    u32 zero5=0;self->mB7C=zero5;
    Req5C4 req;
    Req5C4* r = func_002C11E8(&req, 2, zero5, zero5);
    func_0016898C(self->mDB4, r);
}
