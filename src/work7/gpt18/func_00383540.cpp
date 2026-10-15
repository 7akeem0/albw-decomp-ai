#include "range.h"
struct Obj3835 {char pad[0x34];void* a;void* b;u8 flag;};
extern void func_004CF478(void*,s8,s32);
void func_00383540(Obj3835* p,s8 v){func_004CF478(p->flag==1?p->b:p->a,v,0);}
