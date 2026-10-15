#include "../../range.h"
struct Sub{u8 data[0x30];};struct S{u8 pad[0x460];Sub sub;u16 word490,flags492;};extern void*data_00709D28;extern void func_004A9120(void*,Sub*);extern void func_004A8BFC(void*,Sub*,s32);void func_00149178(S*p){func_004A9120(data_00709D28,&p->sub);func_004A8BFC(data_00709D28,&p->sub,3);p->flags492=0x1f00;}
