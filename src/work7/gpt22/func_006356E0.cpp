#include "range.h"
struct S {u8 pad[0x9c2]; u8 flag;};
extern "C" void func_006356F4(S*,s32,s32);
void f_006356E0(S* p){p->flag=1;func_006356F4(p,7,0);}
