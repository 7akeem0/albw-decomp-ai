typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

extern "C" void func_002313DC(void* p);
extern "C" void func_00231448(void* p);
extern "C" void func_00231524(void* p);
extern "C" void func_002C00A8(void* p);
extern "C" void func_004727B8(void* p, s32 v);
extern "C" void func_0047E8C4(void* p, s32 a, s32 b);
extern "C" void func_0066DDF4(void* p, s32 v);
extern "C" void func_0051B5C4(void* p);
extern "C" void func_0051BE94(void* p);
extern "C" void func_0051B524(void* p);
extern void* data_007142C8;

struct Model { u8 pad[4]; void* m4; u8 pad8[0x16 - 8]; u16 m16;
    void setFlag40(bool b) { if (b) m16 |= 0x40; else m16 &= (u16)~0x40; }
    void setM4(void* p) { m4 = p; setFlag40(p != 0); }
};
struct Snd { u8 pad[0x50]; u8 m50[4]; u8 m54; };
struct Sub200 { u8 pad[8]; s8 m8; u8 pad9[3]; };
struct Obj {
    u8 pad0[0xd];
    u8 md;
    u8 me;
    u8 padf[0x14 - 0xf];
    Model* m14;
    u8 pad18[0xc8 - 0x18];
    u16 mc8;
    u8 padca[0xf8 - 0xca];
    u8 mf8[0xc];
    u8 m104[0xc];
    u8 m110[0xc];
    u8 m11c[0xc];
    u8 pad128[0x200 - 0x128];
    Sub200 m200;
    void* m20c;
    void* m210;
    Snd* m214;
    void* m218;
    u8 pad21c[0x248 - 0x21c];
    f32 m248, m24c, m250, m254;
    u8 pad258[8];
    f32 m260;
    u8 pad264[0x280 - 0x264];
    u32 m280;
    u8 pad284[0x290 - 0x284];
    u8 m290, m291, m292;
    void f();
    void func_00448700();
};

void Obj::f()
{
    u32 zero = 0;
    m290 = zero;
    m291 = zero;
    mc8 = zero;
    func_002313DC(&mc8);

    if (md == 4 && me == 4)
        return;

    Sub200& s = m200;
    if (m292 == 0) {
        func_00231448(m104);
        func_00231524(mf8);
        func_00231448(m11c);
        func_00231524(m110);
        func_002C00A8(m14);
        Model* o = m14;
        void* v = m218; __schedule_barrier();
        o->m4 = v;
        u32 b = (u32)v; if (b) b = 1;
        u16* pf = &o->m16;
        u16 fl = *pf;
        if (b)
            fl |= 0x40;
        else
            fl &= (u16)~0x40;
        *pf = fl;

        if (s.m8 != 0)
            func_00448700();

        func_004727B8(m20c, 1);
        func_0047E8C4(m210, 1, 0);
        Snd* m = m214;
        if (m->m54 == 3)
            func_0066DDF4(m->m50, 0);
    }

    if (md != 0 || me != 0) {
        func_0051B5C4(data_007142C8);
        func_0051BE94(data_007142C8);
        func_0051B524(data_007142C8);
    }

    f32 z = 0.0f;
    m250 = z;
    m254 = z;
    m248 = z;
    m24c = z; __schedule_barrier();
    m260 = z;
    m280 = zero;
}
