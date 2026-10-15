#include "../../range.h"
extern void*data_00709DF8;struct S{u8 pad[0x1870];u32 slots[1];};extern S*data_0070B960;extern void func_004EE5AC(void*);
void func_0014B08C(){func_004EE5AC(data_00709DF8);u32*slot=data_0070B960->slots;*slot=0;}
