#include "ladder_types.h"
struct O4E633{char pad[0x4e4];u32 state;u8 kind;};
extern void func_0066AA1C(void*,u32) ;
void f_004E6338(O4E633* p){if(p->kind!=5)return;func_0066AA1C(&p->state,0);}
