#include "range.h"
struct S56A { char pad[0x3c]; s32 end,begin; };
s32 f_56A1DC(const S56A* p) { return p->end-p->begin; }
