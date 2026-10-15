#include "range.h"
struct T{char pad[234];u8 v;};struct S{char pad[160];T* v;};
bool f_58DC24(S* p){if(!p->v)return false;if(p->v->v&1)return true;return false;}
