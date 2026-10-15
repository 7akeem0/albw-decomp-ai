#include "range.h"
struct Owner464{u8 pad[0x12b];u8 a,b;u8 gap12d[0x210-0x12d];u32 value;u8 gap214[0x440-0x214];u32 first,second;void*child;};
extern "C" void func_0058FA08(void*);
void func_00464DC4(Owner464*p){void*c=p->child;p->value=0;if(c){p->first=0;p->second=0;func_0058FA08(c);p->child=0;}p->b=0;p->a=0;}
