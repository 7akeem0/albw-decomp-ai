#include "range.h"
struct A{char pad[0x33e];Flag16 flags;};extern A* data_007142C8;extern void func_001B6AFC(void*);
void f_00452084(void*p){Flag16*f=&data_007142C8->flags;f->set(4);func_001B6AFC(p);}
