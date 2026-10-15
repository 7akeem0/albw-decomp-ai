#include "ds6.h"

struct Obj4A17A4 { Vec3 mA; Vec3 mB; Vec3 mC; };

f32 func_00115DC8(Vec3* v);
void func_00115E10(Vec3* out, const Vec3* a, const Vec3* b);

void func_004A17A4(Obj4A17A4* self) {
    func_00115DC8(&self->mA);
    Vec3* c = &self->mC;
    Vec3* b = &self->mB;
    func_00115E10(b, c, &self->mA);
    func_00115DC8(b);
    func_00115E10(c, &self->mA, b);
}
