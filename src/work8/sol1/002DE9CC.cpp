

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
struct S2DE9CC { char pad[0x28]; u32 m28; u32 m2C; u32 m30; u8 b34; };
extern "C" void func_001E05CC(void*, void*);
static inline void sol1ctx_0(void* const& a0,void* const& a1){func_001E05CC(a0,a1);}

struct NodeHead{u32 a,b;};
static u32 endptr(u32 p,u32 off){return p-off;}
void func_002DE9CC(S2DE9CC* self, void* arg) {
    if (self->m2C != 0) {
        u32 off = self->m30;
        u32 n = self->m28 - off; __schedule_barrier();
        u32 head=(u32)self+0x24;__schedule_barrier();u32 end=endptr(head,off);
        while (n != end) {
            sol1ctx_0((void*)n, arg);
            n = *(u32*)(n + off + 4) - off;
        }
    }
    self->b34 = 0;
}
