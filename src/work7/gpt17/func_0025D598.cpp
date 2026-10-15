#include "range.h"
struct Obj {u8 pad[0x8c];s8 active,blocked;};
extern void* data_007125B0;
extern void func_001E2664(void*,Obj*);
void f_0025D598(Obj*p){if(p->active&&!p->blocked)func_001E2664(data_007125B0,p);}
