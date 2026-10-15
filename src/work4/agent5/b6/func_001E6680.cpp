#include "../sub6e4.h"
bool Sub6E4::getPos(Vec3* out) const {
    if (m0 == 0)
        return false;
    s8 i = m20;
    if (i < 0)
        return false;
    Ent6E4* e = m0->get(i);
    if (e == 0)
        return false;
    *out = e->m18;
    return true;
}
