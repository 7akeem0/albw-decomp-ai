

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

struct Vec3 { f32 x,y,z;Vec3& operator=(const Vec3&s){x=s.x;y=s.y;z=s.z;return *this;} void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
struct Q28B0 { char pad[0x80]; char c80[0xe4]; u32 m164; };
struct S28B0 { char pad[0x3d0]; f32 f3D0, f3D4, f3D8; char g[0x3e8-0x3dc]; u32 m3E8; char g2[0x478-0x3ec]; Q28B0* m478; };
extern "C" void func_001151EC(void*, void*);
void func_0028B008(S28B0* p, void* a, const Vec3* v, u32* z) {
    Q28B0 * q = p->m478;
    q->m164 |= 0x40000000;
    func_001151EC(q->c80, a);
    *(Vec3*)&p->f3D0=*v;
    p->m3E8 = *z;
}
