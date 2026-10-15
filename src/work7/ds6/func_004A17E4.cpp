#include "ds6.h"

struct Obj4A17E4 { Vec3 mA; Vec3 mB; Vec3 mC; };

f32 func_00115DC8(Vec3* v);
void func_00115E10(Vec3* out, const Vec3* a, const Vec3* b);

void func_004A17E4(Obj4A17E4* self) {
    Vec3* c = &self->mC;
    func_00115DC8(c);
    Vec3* b = &self->mB;
    func_00115E10(&self->mA, b, c);
    func_00115DC8(&self->mA);
    func_00115E10(b, c, &self->mA);
}
