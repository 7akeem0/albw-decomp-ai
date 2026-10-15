// 0x68C58C 260B: atan2 for a 2-float vector, returning a Q32 angle (2pi = 2^32).
typedef unsigned int u32;
typedef float f32;

u32 func_004905E0(f32 ratio);   // atan of a ratio in the same Q32 angle units

u32 func_0068C58C(f32* v) {
    f32 x = v[0];
    f32 y = v[1];
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
