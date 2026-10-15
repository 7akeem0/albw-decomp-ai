#include "range.h"
struct Object2476 {char pad[0x434];void*model;char pad438[0x448-0x438];FlagChild24*a;FlagChild24*b;};
extern void func_004CF478(void*,bool,u32);
void target(Object2476*p){func_004CF478(p->model,false,0);p->a->flag=0;p->b->flag=0;}
