#include "../../range.h"
struct S{char pad[0x1c];void*p;};extern "C" void func_00438580(void*,int,int);extern "C" void func_0014D644(S*p,bool b){if(p->p)func_00438580(p->p,2,b?1:2);}
