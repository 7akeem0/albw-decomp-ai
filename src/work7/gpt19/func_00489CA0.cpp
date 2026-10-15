#include "range.h"
struct Arg{u8 pad[0x10];void* m10;};
struct S{u8 pad[0x5c];void* m5C;};
extern "C" bool func_00489CB0(void*,u32,Arg*);
bool f_00489CA0(S* p,u32 a,Arg* b){p->m5C=b->m10;return func_00489CB0(p->m5C,a,b);}
