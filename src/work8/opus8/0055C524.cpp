typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Vec3 {
    float x, y, z;
    void setSub(const Vec3& a, const Vec3& b);
    float dot(const Vec3& o) const { return x * o.x + y * o.y + z * o.z; }
};
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; r.setSub(a, b); return r; }
inline Vec3 sub(const Vec3& a, const Vec3& b) { Vec3 r; r.setSub(a, b); return r; }
inline Vec3 sub2(const Vec3& b, const Vec3& a) { Vec3 r; r.setSub(a, b); return r; }
struct Owner { char p0[0x3d0]; Vec3 v3d0; char p1[0xe00 - 0x3d0 - 12]; u8 e00; };
struct Self { Owner* owner; };
struct GObj {
    char p0[0x1c];
    Vec3* m1c;
    char p1[0x24 - 0x20];
    u32* m24;
};

extern "C" GObj* data_0070FB60;
extern "C" s32 func_00556E7C(GObj* g, s32 k);
extern "C" s32 func_0055696C(GObj* g, s32 k);
void func_004D80A4(Vec3* out, u32 angle, float len);

extern "C" bool func_0055C524(Self* self) {
    bool r4 = false;
    if (func_00556E7C(data_0070FB60, 0x35) != 0) r4 = true;
    else if (func_00556E7C(data_0070FB60, 0x4c) != 0) r4 = true;
    else if (func_00556E7C(data_0070FB60, 0x4b) != 0) r4 = true;
    bool chk = false;
    if (func_00556E7C(data_0070FB60, 0x34) != 0) {
        chk = true;
    } else if (func_00556E7C(data_0070FB60, 0x53) != 0) {
        chk = (u32)func_0055696C(data_0070FB60, 7) >= 3;
    }
    if (chk && self->owner->e00 == 0xd) {
    } else if (r4 == 0) {
        return false;
    }
    GObj* g = data_0070FB60; Vec3 d = self->owner->v3d0 - *g->m1c;
    Vec3 n;
    func_004D80A4(&n, *data_0070FB60->m24, 1.0f);
    n.y = 0.0f;
    return d.dot(n) > 0.5f;
}
