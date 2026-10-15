#include "range.h"
struct Arg{u8 pad[0x10];void* m10;};
struct S{u8 pad[0x5c];void* m5C;};
extern "C" bool func_0048A08C(void*,Arg*);
bool f_0048A07C(S* p,Arg* a){p->m5C=a->m10;return func_0048A08C(p->m5C,a);}
