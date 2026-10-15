#include "range.h"
struct Manager43B {u8 pad[0x18];s8 kind;};extern Manager43B*data_00709DF8;
struct Obj43B {u8 pad[0x8c];u8 enabled;};
void func_0043B614(Obj43B*p){if(data_00709DF8){s32 k=data_00709DF8->kind;if(k>=9&&k<=21)p->enabled=1;}}
