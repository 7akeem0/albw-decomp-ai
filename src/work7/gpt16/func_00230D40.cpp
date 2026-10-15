#include "range.h"
struct O{u8 pad[0x108];u32 state;u8 gap[0x24];u8 flag;};extern Global165F*data_00708998;extern void func_0065EC84(void*,s32)__attribute__((weak));void f230D40(O*p){if(data_00708998->child->value>=0)return;p->flag=1;func_0065EC84(&p->state,0);}
