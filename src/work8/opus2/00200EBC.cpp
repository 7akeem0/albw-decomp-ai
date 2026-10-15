


typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef unsigned long long u64;

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {}
    void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};

struct Timer {
    u32 cur;
    u32 max;
    f32 rate;
    void start(u32 n, u32 c = 0) {
        max = n;
        if (n) rate = 1.0f / n;
        else rate = 0.0f;
        cur = c;
    }
    bool step() {
        if (cur < max) { cur++; return true; }
        return false;
    }
};

struct StateMgr { void changeState(int s) __attribute__((weak)); };

void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
s32 func_0068C690(const Vec3& v);   
void func_0051D27C(s32* ang, s32 target, s32 step);
struct Obj70FB60 { char pad[0x1c]; Vec3* m1c; };
extern Obj70FB60* data_0070FB60;

struct Sub420 { char pad[0x22]; u8 m22; };
struct Sub424 { char pad[0x2c]; u32 m2c; };
struct Sub510 { char pad[4]; u8 m4; };

struct En;
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
void func_004F88A0(En* e, u32 v);
bool func_0058A8F0(En* e);
s32 func_0058AB74(En* e);
struct Random;
u32 func_00111A64(Random* r);   
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
s32 func_00588BE4(En* e);   
void func_0014FAFC(En* e, s32 ang, f32 rate);
extern const s32 ro_006938F0;
void func_00150A84(En* e, const sead::SafeString& name, s32 v);





struct En {
    char p0[0x3a4];
    u32 m3a4;           
    u32 p3a8;
    f32 m3ac;           
    char p3b0[0x3d0 - 0x3b0];
    Vec3 m3d0;          
    Vec3 m3dc;          
    u32 m3e8;           
    char p3ec[0x420 - 0x3ec];
    Sub420* m420;       
    Sub424* m424;       
    char p428[0x4e4 - 0x428];
    Vec3 m4e4;          
    char p4f0[0x508 - 0x4f0];
    s16 m508;           
    char p50a[0x510 - 0x50a];
    Sub510* m510;       
    char p514[0x59c - 0x514];
    u32 m59c;           
    char p5a0[0x8bc - 0x5a0];
    Timer m8bc;         
    Timer m8c8;         
    s32 m8d4;           
    s32 m8d8;           
    StateMgr mState;    
    u8 m8dd[3];
    u8 m8e0;            
    u8 m8e1;            
    char p8e2[0x910 - 0x8e2];
    u32 m910;           
    u32 m914;
    Timer m918;         
    Vec3 m924;          
    u32 m930;
    s32 m934;           
    s32 m938;           
    s8 m93c;            
    u8 m93d;            
    void f();
};
void func_00115C54(Vec3* out, const Vec3& a, const Vec3& b);   
void func_00115D70(Vec3* out, const Vec3& a, f32 s);          
void func_00115154(f32* s, f32* c, u32 ang);                  
f32 func_0058AC38(En* e);
struct V3M { f32 x, y, z; void setAdd(const V3M& a, const V3M& b); void setMul(const V3M& a, f32 s); void addSelf(const V3M& b) { V3M* t = this; t->setAdd(*t, b); } void mulSelf(f32 s) { V3M* t = this; t->setMul(*t, s); } };
struct Hdr { char pad[0x24]; u32 m24; char pad2[0x30 - 0x28]; u16 m30; };
inline void addTo(Vec3& v, const Vec3& o) { func_00115C54(&v, v, o); }
inline void mulBy(Vec3& v, f32 s) { func_00115D70(&v, v, s); }
struct AngZ { s32 v; AngZ(s32 x) : v(x) {} };
struct SC { f32 c, s; };

void En::f() {
    En* self = this;
    self->m59c &= ~0x20;
    {
        Vec3 z(0.0f, 0.0f, 0.0f);
        (*(V3M*)&(m3d0)).addSelf((*(V3M*)&(z)));
    }
    {
        SC sc; sc.c = 0.0f; sc.s = 0.0f;
        func_00115154(&sc.s, &sc.c, ((Hdr*)this)->m24);
        SC t = sc;
        m3dc.z = t.c; __schedule_barrier(); m3dc.x = t.s; m3dc.y = 0.0f;
    }
    u16 h = ((Hdr*)this)->m30;
    if (h == 0) {
        (*(V3M*)&(m924)).setMul((*(V3M*)&(m3dc)), 0.02f);
        (*(V3M*)&(m3dc)).mulSelf(0.015f);
    } else {
        (*(V3M*)&(m924)).setMul((*(V3M*)&(m3dc)), 0.04f);
        (*(V3M*)&(m3dc)).mulSelf(0.05f);
    }
    func_004FABDC(this, 8, 2, 0);
    func_004F88A0(this, m910);
    m424->m2c |= 0x20000;
    *(AngZ*)&m3e8 = AngZ(0);
    m918.start((s32)func_0058AC38(this));
}

