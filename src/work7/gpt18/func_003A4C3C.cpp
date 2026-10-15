#include "range.h"
struct Obj3A4 { char pad[0x145]; s8 state; };
extern "C" void func_0030A0A4(Obj3A4*,void*);
void func_003A4C3C(Obj3A4* p,void* arg) { p->state=-1; func_0030A0A4(p,arg); }
