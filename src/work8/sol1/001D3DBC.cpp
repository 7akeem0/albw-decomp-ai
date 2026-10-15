





typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; };

struct Obj48 {
    virtual void v0(); virtual void v1();
    virtual void v2();                      
    u32 m4;
};

struct BaseA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual ~BaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17();
    virtual Obj48* v18();                   
    virtual void v19(); virtual void v20();
    char padA[0x2e - 4];
    u16 m2E;
    char padA30[0x320 - 0x30];
};

struct BaseB;

struct Req24 {
    Req24(u32 a, BaseB* b);
    u32 m0, m4, m8;
    const Vec3* mC;
    u32 m10, m14;
    s32 m18, m1C, m20;
};

struct BaseB {
    virtual void b0();
    void func_002C41BC(const Req24& r, s32 z);
    char padB[0x3a0 - 0x324];
    u32 m3A0;
    char padB3a4[0x3d0 - 0x3a4];
    Vec3 m3D0;
    char padB3dc[0x40c - 0x3dc];
};

struct Timer {
    u32 cur, max;
    f32 rate;

    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / n; else rate = 0.0f; cur = c; }



};




struct Obj40C;
struct Mem410 { ~Mem410(); u8 pad[0x478 - 0x410]; };

class Act1D3 : public BaseA, public BaseB {
public:

    void func_001D3DBC();

    Obj40C* m40C;
    Mem410 m410;



    f32 m478;
    Timer m47C;

    u32 m488;
    signed char m48C;
    signed char m48D;
};

void Act1D3::func_001D3DBC() {
    Obj48 * o = v18();
    o->v2();
    Req24 r(o->m4, this);
    r.m18 = 1; __schedule_barrier();
    if (m48D) {
        if (m2E == 1) { m47C.start(20); m478 = 0.3f; } else { m47C.start(8); m478 = 0.3f; }
    } else {
        m47C.start(30);
        r.m18 = 0;
        m478 = 0.15f;
    }
    r.mC = &m3D0;
    func_002C41BC(r, 0);
}
