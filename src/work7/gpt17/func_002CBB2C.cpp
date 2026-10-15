#include "range.h"
struct Obj {u8 pad[0x9b0];u32 sub;};
extern void* data_0070D858;
extern void func_00172428(void*,s32,s32,void*);
void f_002CBB2C(Obj* p){func_00172428(data_0070D858,2,1,&p->sub);}
