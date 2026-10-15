#include "ds6.h"

void func_00115154(f32* sinOut, f32* cosOut, u32 angleIdx);

void func_004D8054(Vec3* v, u32 angleIdx, f32 d) {
    f32 s, c;
    func_00115154(&s, &c, angleIdx);
    v->x += s * d;
    v->z += c * d;
}

