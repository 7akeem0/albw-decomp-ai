#include "range.h"
struct C{s16 kind,index;u32 frame;void*owner;void init(void*o,s16 k,s16 i);};void C::init(void*o,s16 k,s16 i){owner=o;index=i;kind=k;}struct O{u8 pad[0x17c];C ctl;};extern "C" void func_0038A928(O*p,void*q,s16 i){if(q)p->ctl.init(q,0,i);}
