typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Vec3 {
    Vec3() {}
    Vec3(const Vec3& a, const Vec3& b) { setSub(a, b); }
    f32 x, y, z;
    void setSub(const Vec3& a, const Vec3& b);
};

struct Sub900 {
    char pad0[0x4c];
    u16 m4c;
    char pad4e;
    u8 m4f;
    u8 m50;
};

struct Self {
    char pad0[0x3d0];
    Vec3 m3d0;
    char pad3dc[0x3e8 - 0x3dc];
    s32 m3e8;
    char pad3ec[0x800 - 0x3ec];
    char pad800[0x11c];
    Vec3 m91c;
};

extern u32 data_0070AA48;

f32 func_00521298(Self* s);
Vec3* func_00520FC0(Self* s);
bool func_001A5458(Self* s, Vec3* p);
struct AngleT { s32 v; AngleT(s32 x):v(x){} };
s32 func_0068C690(const Vec3& v);
u32 func_0058E2B8(const AngleT& p);

bool func_001A5D24(Self* s) {
    Sub900* a = (Sub900*)((char*)s + 0x900);
    if (0 != a->m4f) return false;
    if (0 != a->m4c) return false;
    if (a->m50 != 0) return true;
    if (func_00521298(s) < 2.25f) {
        if (!func_001A5458(s, func_00520FC0(s))) return true;
    }
    Vec3 diff(*func_00520FC0(s), s->m3d0);
    s32 t = s->m3e8;
    s32 an = func_0068C690(diff);
    if (func_0058E2B8(AngleT(t - an)) > data_0070AA48) return false;
    Vec3* q = &s->m91c;
    Vec3* pp = func_00520FC0(s);
    f32 dz = q->z - pp->z;
    f32 dx = q->x - pp->x;
    f32 d2 = dx * dx + dz * dz;
    if (d2 >= 6.25f) return false;
    if (!func_001A5458(s, func_00520FC0(s))) return true;
    return false;
}
