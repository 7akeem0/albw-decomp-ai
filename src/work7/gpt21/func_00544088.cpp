#include "range.h"
struct S544 { char pad[0xb0]; Vec3 value; };
struct O544 { char pad[0x2c]; S544* ptr; };
Vec3* f_544088(const O544* p) { return p->ptr ? &p->ptr->value : 0; }
