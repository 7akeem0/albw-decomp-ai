#include "range.h"
void func_0032C72C(Obj32C* p, Vec3* out, u32 index) {
    if (index < 3) func_0032C750(&p->caches[0], out, index);
    else func_0032C750(&p->caches[1], out, index-3);
}
