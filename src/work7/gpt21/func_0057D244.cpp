#include "range.h"
struct S { char pad[0x10]; void* owner; };
bool f_57D244(void* p,const S* s) { return s->owner==p; }
