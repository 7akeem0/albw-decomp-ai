#include "range.h"
struct Obj247624{char pad[0x2d7];u8 flag;char pad2d8[0x434-0x2d8];void*model;char pad438[0x448-0x438];FlagChild24*a,*b;};
extern void func_004CF478(void*,bool,u32);
extern "C" void target(Obj247624*p){func_004CF478(p->model,0,0);p->a->set(0);p->b->set(0);p->flag=1;}
