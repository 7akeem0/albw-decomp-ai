#include "range.h"
struct S {u8 pad[0x88];s32 value;};
extern "C" void func_0012C790(S*);
extern "C" void func_001B6B38(S*);
extern "C" void f_00474780(S* s,bool on){s->value=-1;func_0012C790(s);if(!on)func_001B6B38(s);}
