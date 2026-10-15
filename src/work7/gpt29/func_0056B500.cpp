#include "range.h"
struct Resource56B { u32 m0; u16 kind; u16 pad6; s32 offset; };
void* f_0056B500(Resource56B* p) {
    if (p->kind != 0x101) return 0;
    return (char*)p + p->offset;
}
