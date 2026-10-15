#include "range.h"
extern "C" void func_001B6D40(void*);extern "C" void func_0012C790(void*);
struct Obj43C {u8 pad[0x148];void*optional;u8 pad14c[0x158-0x14c];void*child;};
void func_0043C460(Obj43C*p){func_001B6D40(p);func_0012C790(p->child);if(p->optional)func_0012C790(p->optional);}
