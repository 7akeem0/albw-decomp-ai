#include "ladder_types.h"
extern void func_004CF478(void*,s32,s32);
extern void func_004CEAF0(void*);
void target(O4D18*p,s32 value){p->flag=1;p->child->flag=(u8)value;func_004CF478(p->model,value,0);func_004CEAF0(p->model);}
