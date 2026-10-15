#include "range.h"
struct S56D { char pad[0x38]; f32 values[1]; };
f32 f_56D544(const S56D* p,s32 i) { return p->values[i]; }
