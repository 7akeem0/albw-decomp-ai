#include "range.h"
struct Obj {u8 pad[0x418];u32 state;s8 mode;};extern void func_0066133C(u32*,s32) ;
bool f_00286BF8(Obj*p){if(p->mode==5)return true;if(p->mode==2)func_0066133C(&p->state,3);return false;}
