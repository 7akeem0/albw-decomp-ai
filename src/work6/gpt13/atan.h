s32 func_004905E0(f32);
inline s32 atan2Idx(f32 y, f32 x) {
    if (x == 0.0f && y == 0.0f) return 0;
    if (x >= 0.0f) {
        if (y >= 0.0f) {
            if (x >= y) return func_004905E0(y / x);
            else return 0x40000000 - func_004905E0(x / y);
        } else {
            if (x >= -y) return -func_004905E0(-y / x);
            else return 0xc0000000 + func_004905E0(x / -y);
        }
    } else {
        if (y >= 0.0f) {
            if (-x >= y) return 0x80000000 - func_004905E0(y / -x);
            else return 0x40000000 + func_004905E0(-x / y);
        } else {
            if (x <= y) return 0x80000000 + func_004905E0(y / x);
            else return 0xc0000000 - func_004905E0(x / y);
        }
    }
}
