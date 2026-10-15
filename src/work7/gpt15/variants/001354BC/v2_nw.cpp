#include "../../range.h"
extern "C"  void func_00656DE8(void*,s32);struct S{u8 pad4B8[0x4b8];u32 state;u8 pad4BC[0x604-0x4bc];u8 flag;u8 pad605[3];u32 count;};extern "C" void func_001354BC(S*p){if(p->flag==4){if(p->count==90){p->flag=5;func_00656DE8(&p->state,2);}++p->count;}}
