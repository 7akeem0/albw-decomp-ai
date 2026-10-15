#include "range.h"
struct Obj {u8 pad[0x14];u8 state;u8 p15[0xf];u8 flag;u8 p25[0x53];u32 value;};
void f_002E21A4(Obj* p){if(p->state==1)p->flag=1;p->value=0;}
