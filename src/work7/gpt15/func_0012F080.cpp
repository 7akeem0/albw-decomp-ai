#include "range.h"
struct S { char pad[0x104]; float x,y; };
extern "C" void func_0012F080(S* p,float x,float y) { p->x=x; p->y=y; }
