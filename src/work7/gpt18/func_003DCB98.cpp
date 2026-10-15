#include "range.h"
struct Obj3DCB{char pad[0x28];float value;};
extern u8 bss_007A8798[];
extern "C" void func_003DDE34(void*,float);
void func_003DCB98(Obj3DCB*p,float x){p->value=x;func_003DDE34(bss_007A8798,x);}
