typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Vec3 { f32 x, y, z; };
struct Ang { s32 v; Ang(s32 x) : v(x) {} };
s32 func_004D80EC(const Vec3* pos, u32 a, s32 ang);
s32 func_0068C690(const Vec3& v);
u32 func_0058E2B8(const Ang& a);
bool func_0054C9CC(void* p);

struct Info { s8 m0; s8 m1; s8 m2; s8 m3; };
struct Actor {
    char pad[0x3d0];
    Vec3 m3d0;
    char pad3dc[0x3e8 - 0x3dc];
    s32 m3e8;
    char pad3ec[0x438 - 0x3ec];
    u32 m438;
};
static inline bool badInfo(const Info* info) {
    s8 c1 = info->m1;
    s8 c2 = info->m2;
    s8 c3 = info->m3;
    if (c1 == 1 || c1 == 2) return true;
    if (c1 == 3 || c2 == 2) return true;
    if (c2 == 3 || c2 == 4) return true;
    if (c2 == 6 || c3 == 1) return true;
    return false;
}
static inline u32 angDiff(s32 a, s32 b) { return func_0058E2B8(Ang(a - b)); }
struct Obj {
    char pad[0x10];
    Actor* m10;
    void* m14;
    char pad18[0x42 - 0x18];
    s16 m42;
    bool f(const Vec3* dir, u32 a, u32 flags, const Info* info);
};

bool Obj::f(const Vec3* dir, u32 a, u32 flags, const Info* info) {
    if (flags & 0x8000) return false;
    u32 flags_c22 = flags;
    if ((flags_c22 & 0x20000) && m10->m438 <= 2) return false;
    if (!(flags & 0x40000) && info != 0) {
        s8 c1 = info->m1;
        s8 c2 = info->m2;
        s8 c3 = info->m3;
        if (c1 == 1 || c1 == 2) return false;
        if (c1 == 3 || c2 == 2) return false;
        if (c2 == 3 || c2 == 4) return false;
        if (c2 == 6 || c3 == 1) return false;
    }
    s32 ang = func_004D80EC(&m10->m3d0, a, m10->m3e8);
    if (!(dir->x == 0.0f && dir->y == 0.0f && dir->z == 0.0f)) {
        ang = func_0068C690(*dir) + 0x80000000;
    }
    if (angDiff(ang, m10->m3e8) > 0x471C71C7u) return false;
    s16 k = m42;
    if (k == 0x27 || k == 0x31 || k == 0x32) {
        if (func_0054C9CC(m14)) return true;
    }
    return false;
}
