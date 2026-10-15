#include "range.h"
struct Object1740C {char pad[0x43c];void*child;char pad440[0x450-0x440];u8 flag;};
extern bool func_002FCC74(void*,s32);
void target(Object1740C*p){if(p->flag){bool b=func_002FCC74(p->child,60);u8 z=0;if(b)p->flag=z;}}
