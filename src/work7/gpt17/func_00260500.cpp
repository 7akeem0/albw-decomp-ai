#include "range.h"
struct Obj {u8 pad[0xc];u32 value;u8 state;u8 p11[0x33];u8 flag;};
bool f_00260500(Obj* p){if(p->state==1){p->value=0;p->flag=0;}return false;}
