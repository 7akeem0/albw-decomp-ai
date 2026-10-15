#include "range.h"
struct C {u8 pad[0x30];u32 value;};
extern "C" void func_0041497C(void*);
extern "C" void f_0041A9D0(void* s,u32 mode,C* c){switch(mode){case 0:case 1:func_0041497C(s);c->value=0;break;case 2:case 3:c->value=0;break;default:break;}}
