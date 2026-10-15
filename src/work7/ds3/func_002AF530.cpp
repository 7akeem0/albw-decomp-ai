#include "ds3.h"
struct S2AF5 { char pad[1]; };
extern "C" f32 func_0058A77C(S2AF5*, void*);
extern "C" void func_002AE72C(S2AF5*, const Vec3*);
void func_002AF530(S2AF5* p, const Vec3* v, void* a) {
    Vec3 tmp = *v;
    tmp.y = func_0058A77C(p, a);
    func_002AE72C(p, &tmp);
}
