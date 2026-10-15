#include "range.h"
struct Own001E775C{u8 pad[0x788];u8 state[4];u8 gap[0x7b0-0x78c];u8 sub[4];};
extern Global171*data_0070B728;extern __attribute__((weak)) void func_0065CFDC(void*,s32);
bool test(Global171*g,void*const&v){return g->field&&g->field==v;}
void f_001E775C(Own001E775C*p){if(!test(data_0070B728,p->sub))func_0065CFDC(p->state,1);}
