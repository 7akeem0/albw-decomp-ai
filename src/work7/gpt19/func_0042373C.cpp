#include "range.h"
struct S {u8 pad[0xB0];u8 ctl[4];};
extern "C" bool func_00532C78(void*);
extern "C" void func_00231340(void*);
extern "C" void func_00231448(void*);
extern "C" void f_0042373C(S* s){if(func_00532C78(s->ctl)){func_00231340(s->ctl);func_00231448(s->ctl);}}
