#include "range.h"
struct Obj {u8 pad[0xc];u32 state;u8 pad10[0x61];u8 request,guard;};
extern  void func_00660BA4(u32*,s32);
void f_0026F654(Obj*p){p->request=1;if(!p->guard)func_00660BA4(&p->state,0);}
