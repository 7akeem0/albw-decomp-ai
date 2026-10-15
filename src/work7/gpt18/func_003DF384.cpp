#include "range.h"
struct C{u16 a,b;};struct O{char pad[0x10a8];C*data[1];};extern bool func_0010AA9C(O*);u32 f(O*p){if(!func_0010AA9C(p))return ~0u;u16 i=*(u16*)((char*)p+0x131c);return p->data[i]->b;}
