#include "range.h"
struct S {u8 pad[0x148];void* a;u8 gap[8];void* b;void* c;};
extern "C" void func_004460EC(void*);
extern "C" void func_00478DEC(void*);
extern "C" void f_00478DBC(S* s){if(s->a){if(s->a==s->b)func_004460EC(s->b);}func_00478DEC(s->c);}
