#include "range.h"
struct Obj43D{u8 pad[0x148];void*current;u32 pad14c;void*target;};extern void func_00467704(void*);
void func_0043D874(Obj43D*p){if(p->target&&p->current==p->target)func_00467704(p->target);}
