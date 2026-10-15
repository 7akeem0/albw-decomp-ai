#include "range.h"
struct S {u8 pad[0x38];u32 state;u8 gap[0x74];u8 ctl[4];u8 gap2[0x43];u8 flag;};
extern "C" bool func_00532C78(void*);
extern "C"  void func_0066BFFC(void*,s32);
extern "C" void f_00423E00(S* s){if(!func_00532C78(s->ctl)){s->flag=1;func_0066BFFC(&s->state,0);}}
