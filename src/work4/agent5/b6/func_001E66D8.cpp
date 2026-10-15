#include "../sub6e4.h"
u32 Sub6E4::getParam(s32 j) const {
    if (m0 == 0)
        return 0;
    s8 i = m21;
    if (i < 0)
        return 0;
    Ent6E4* e = m0->get(i);
    if (e == 0)
        return 0;
    return e->m44[j];
}
