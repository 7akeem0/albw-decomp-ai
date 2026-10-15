// func_003E1980: Vec3 normalize-or-fallback. l = x*x+y*y+z*z; if (l != 0) out = v * (1/sqrt(l));
// else out = *fb.

typedef float f32;

struct Vec3 {
    f32 x, y, z;
};

extern "C" float __sqrtf(float v);

void func_003E1980(Vec3* out, const Vec3* v, const Vec3* fb) {
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;
    f32 l = x * x + y * y + z * z;
    if (l == 0.0f) {
        *out = *fb;
    } else {
        f32 inv = 1.0f / __sqrtf(l);
        out->x = x * inv;
        out->y = y * inv;
        out->z = z * inv;
    }
}
