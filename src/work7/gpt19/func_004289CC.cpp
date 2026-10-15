#include "range.h"
struct S{u8 pad[0x74];u32 m74;u8 pad78[0x38];u32 mB0;};
extern "C" void func_004289DC(void*,void*,u32);
void f_004289CC(S* p,u32 a){func_004289DC(&p->m74,&p->mB0,a);}
