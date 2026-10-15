// 0x68C690 260B: atan2(v.x, v.z) for a Vec3, returning a Q32 angle (2pi = 2^32).
typedef unsigned int u32;
typedef float f32;

u32 func_004905E0(f32 ratio);   // atan of a ratio in the same Q32 angle units

inline u32 atanXZ(f32* v) {
    f32 x = v[2];
    f32 y = v[0];
    if (x == 0.0f && y == 0.0f) return 0;
    if (x >= 0.0f) {
        if (y >= 0.0f) {
            if (x >= y) return func_004905E0(y / x);
            return 0x40000000 - func_004905E0(x / y);
        }
        f32 ny = -y;
        if (x >= ny) return 0 - func_004905E0(ny / x);
        return 0xC0000000 + func_004905E0(x / ny);
    } else {
        if (y >= 0.0f) {
            f32 nx = -x;
            if (nx >= y) return 0x80000000 - func_004905E0(y / nx);
            return 0x40000000 + func_004905E0(nx / y);
        }
        if (x <= y) return 0x80000000 + func_004905E0(y / x);
        return 0xC0000000 - func_004905E0(x / y);
    }
}

struct Vec3 { f32 x, y, z; };
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);
u32 func_004D80EC(const Vec3& from, const Vec3& to, u32 def) {
    Vec3 d;
    func_00115C70(&d, to, from);
    if (d.x == 0.0f && d.z == 0.0f) return def;
    return atanXZ(&d.x);
}
