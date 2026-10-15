#include "../sub6e4.h"
bool Sub6E4::getFirstPos(Vec3* out) const {
    if (m0 == 0)
        return false;
    if (m20 < 0)
        return false;
    Ent6E4* e = m0->get(0);
    if (e == 0)
        return false;
    *out = e->m18;
    return true;
}
