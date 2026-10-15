#include "range.h"
struct Output {u32 opaque;};struct Obj {u8 pad[0x520];Output output;u8 pad524[0x531-0x524];u8 flag;};extern void*data_0070FB60;extern bool func_0036174C(void*,s32,Output*);
void f_002881BC(Obj*p){if(p->flag&&func_0036174C(data_0070FB60,90,&p->output))p->flag=0;}
