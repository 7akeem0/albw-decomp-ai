#include "range.h"
struct S { char pad[0xee]; u16 index; };
bool f_54B2D4(const S* p) { return p->index==0xffff; }
