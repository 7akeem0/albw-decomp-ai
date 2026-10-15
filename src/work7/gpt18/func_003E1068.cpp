#include "range.h"
struct Sub3E10 {void func_003E1084(u32);};
struct Child3E10 {char pad[0x68];Sub3E10* inner;};
struct Obj3E10 {char pad[0x15dc];Child3E10* items[1];};
void func_003E1068(Obj3E10* p,u32 i,u32 n){p->items[i]->inner->func_003E1084(n);}
