#include "range.h"
struct S{char pad[0x3d0];Vec3 pos;};
bool f_54C21C(const S*p,Vec3*out){*out=p->pos;return true;}
