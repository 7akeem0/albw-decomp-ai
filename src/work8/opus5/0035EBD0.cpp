typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; };
struct Mtx34 { f32 m[3][4]; };
struct Skel { u8 pad[0x14]; Mtx34* mtx; };
struct Model { u8 pad[0x24]; Skel* skel; };

struct Actor {
    u8 pad0[0xc];
    f32 mC;
    u8 pad10[0x40c - 0x10];
    Model* m40C;
    u8 pad410[0x8cc - 0x410];
    s8 m8CC;
    u8 pad8cd[0xb80 - 0x8cd];
    s32 mB80;
};

extern "C" char data_00706E20[];
Actor* func_0052FBA0(void* mgr, u32 handle);
void func_00548E40(Actor* a, Vec3* out);
f32 func_00548CB4(Actor* a);

struct Self {
    u8 pad0[0x2e];
    u16 m2E;
    u8 pad30[0x50 - 0x30];
    u32 m50;
    u8 pad54[0x2d7 - 0x54];
    u8 m2D7;
    u8 pad2d8[0x3d0 - 0x2d8];
    Vec3 m3D0;
    u8 pad3dc[0x518 - 0x3dc];
    f32 m518;
    f32 m51C;
    void update();
    void impl(Actor* a);
};

inline void Self::impl(Actor* a)
{
    s8 k = a->m8CC;
    if (k == 0xe || k == 0xf || k == 0x10 || k == 0x11 || k == 0x12) {
        f32 ofs = 0.55f;
        if (m2E == 0) {
            Mtx34* m = &a->m40C->skel->mtx[a->mB80];
            m3D0.x = m->m[0][3];
            f32 y = m->m[1][3];
            m3D0.y = y;
            m3D0.z = m->m[2][3];
            m3D0.y = y + ofs;
        } else {
            func_00548E40(a, &m3D0);
        }
        m51C = a->mC + ofs;
        m518 = func_00548CB4(a) + 1.5f;
    } else {
        m2D7 = 1;
    }
}

void Self::update()
{
    u32 h = m50;
    Actor* a = func_0052FBA0(*(char**)data_00706E20 + 0x3dbbc, h);
    if (a != 0) impl(a);
}


