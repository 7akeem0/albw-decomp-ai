#include "range.h"
struct O45E {u8 pad[0x9dc];u16 value;u8 gap[0xc];u8 flag;};
extern "C" void func_006538B0(O45E*);
extern "C" void func_003745E4(O45E*p){func_006538B0(p);p->value=0;p->flag=0;}
