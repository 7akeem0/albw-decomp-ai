

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
struct S2E02 { char pad[0x3d0]; Vec3 v3D0; char g[0x49c-0x3dc]; void* m49C; };
extern "C" f32 func_0054DE3C(S2E02*, s32, s32, f32);
extern "C" void func_004356B4(void*);
f32 add(const f32& a,const f32& b){return a+b;}
void func_002E021C(S2E02* p, f32 f) {
    Vec3 v = p->v3D0;
    f32 r = func_0054DE3C(p, 0, 1, f);
    Vec3* out = (Vec3*)((char*)p->m49C + 4);
    out->x = v.x;
    out->y = add(r,v.y);
    out->z = v.z - f;
    func_004356B4(p->m49C);
}
