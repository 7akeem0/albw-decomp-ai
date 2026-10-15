#include "range.h"
struct S{char pad[0x184];u32 sub;};extern bool func_00532984(S*,void*);extern bool func_0054B430(void*,void*);bool f_58BABC(S*p,void*arg){return func_00532984(p,arg)||func_0054B430(&p->sub,arg);}
