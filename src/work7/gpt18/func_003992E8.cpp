#include "range.h"
struct S92E {u32 x;};struct O92E {u8 pad[0x38];u8 flag;u8 gap[0x5f];S92E sub;};
extern void*data_00709D28;
extern "C" void func_004A9120(void*,S92E*);
extern "C" void func_003992E8(O92E*p){if(p->flag)func_004A9120(data_00709D28,&p->sub);}
