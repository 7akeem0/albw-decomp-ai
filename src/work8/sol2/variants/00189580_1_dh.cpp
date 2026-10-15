
typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Game;
struct Vec3 { f32 x, y, z; };

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

extern Game* data_00706E20;
extern u32* data_0070C8E0;
extern void* data_00711F50;
extern u32 ro_00693218;

u32 func_0019B04C(u32 v);
u16 func_00581D60(void* v);
void func_004E97FC(void* mgr, const sead::SafeString& s, const Vec3* v);

struct SpawnParam {
    SpawnParam() { m20 = 0; m24 = 0; m1c = 0; m48 = 0; m4c = 0; m2c0 = 0; reset(); }
    void reset();
    u32 m0;
    Vec3 m4;
    char pad10[0xc];
    u32 m1c;
    u32 m20;
    u32 m24;
    u16 m28;
    s16 m2a;
    s16 m2c;
    char pad30[0x16];
    f32 m44;
    u32 m48;
    u32 m4c;
    u16 m50;
    char pad52[0x2c0 - 0x52];
    u32 m2c0;
};

void func_004C4AF4(Game* g, SpawnParam* p, u32 x);

 u32 with(u32 f,u32 bit){return f|bit;}
void func_00189580(const Vec3* from, u32 a, u16 kind, const u32* b, s16 mode) {
    u32 aa = a;
    SpawnParam p;
    p.m0 = func_0019B04C(ro_00693218);
    p.m4c = *b;
    p.m4 = *from;
    p.m20 = aa;
    p.m28 = 0;
    p.m2a = mode;
    p.m2c = kind;
    p.m50 = kind ? func_00581D60(data_0070C8E0) : -1;
    u32 f=p.m2c0;p.m2c0=with(f,1);
    if (mode == 3)
        func_004E97FC(data_00711F50, sead::SafeString("SE_BombS_SET_Lv2"), from);
    else
        func_004E97FC(data_00711F50, sead::SafeString("SE_BombS_SET"), from);
    func_004C4AF4(data_00706E20, &p, 0);
}
