

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
struct Timer2FBD { u32 cur; u32 max; f32 rate;
    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / n; else rate = 0.0f; cur = c; } };
struct S2FBDAC { char pad[0x4e4]; Vec3 m4e4; char pad2[0x8e0 - 0x4f0]; f32 f8e0; f32 f8e4;
                 char pad3[0x8ec - 0x8e8]; Timer2FBD t; };
extern "C" void func_002FB984(void*);
void func_002FBDAC(S2FBDAC* self) {
    func_002FB984(self);
    self->t.start(0x1e);
    self->f8e4 = 0.01f;
    self->f8e0 = 0.0f;
    Vec3* v = &self->m4e4; __schedule_barrier();
    v->x = 0.01f;
    v->y = 0.01f;
    v->z = 0.01f;
}
