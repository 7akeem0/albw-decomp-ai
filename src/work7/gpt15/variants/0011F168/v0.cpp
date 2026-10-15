#include "../../range.h"
struct S{char pad[0xc];void*p;};extern "C" void func_0011F188(void*);extern "C" void func_0011F168(S*p){if(p->p)func_0011F188(p->p);func_0011F188(p);}
