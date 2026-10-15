#include "../../range.h"
struct S{char pad[0x1c];void*p;};extern "C" void func_00438580(void*,int,int);extern "C" void func_0014D5E8(S*p){if(p->p)func_00438580(p->p,0,0);}
