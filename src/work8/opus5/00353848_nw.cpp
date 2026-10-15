typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; void setMul(const Vec3& a, f32 s); };
struct Ctl8C8 { u8 pad[4]; };
bool func_0036BE78(Ctl8C8* c);
void func_0036B758(Ctl8C8* c);
struct Ang { s32 v; };
void func_0051D39C(Ang* a, s32 b, s32 c);
f32 func_004F944C();
void func_00666318(void* p, s32 v) ;

struct Self {
    u8 pad0[0xc];
    f32 mC;
    u8 pad10[0x3d0 - 0x10];
    Vec3 m3D0;
    Vec3 m3DC;
    Ang m3E8;
    u8 pad3ec[0x8c8 - 0x3ec];
    Ctl8C8 m8C8;
    u8 pad8cc[0xa5c - 0x8cc];
    u8 mA5C[4];
    s32 getKind();
    f32 getValue();
    bool isDone();
    void changeState(s32 a, s32 b, s32 c);
    void update2();
    void update();
};

void Self::update()
{

    bool b = func_0036BE78(&m8C8);
    s32 k = getKind();
    if (k != 0 && k == 0xd) {
        f32 v = getValue();
        if (48.0f < v && v < 72.0f) func_0051D39C(&m3E8, 0, (s32)(72.0f - v));
        if (isDone()) {
            func_0036B758(&m8C8);
            changeState(0, -1, 0);
        }
    }
    { Vec3* p = &m3DC; p->setMul(*p, 0.85f); }
    if (m3D0.y < mC) {
        m3D0.y = mC;
        m3DC.y = func_004F944C();
    }
    update2();
    if (b) func_00666318(mA5C, 5);
}



