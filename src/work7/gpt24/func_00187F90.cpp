#include "range.h"
struct Object187F {char pad[0x4f4];void*a;char pad4f8[0x52c-0x4f8];void*b;char pad530[0x5d5-0x530];u8 flag;};
extern void func_004CF478(void*,bool,u32);
extern void func_00151148(void*,bool);
void target(Object187F*p){func_004CF478(p->a,true,0);func_00151148(p->b,true);p->flag=1;}
