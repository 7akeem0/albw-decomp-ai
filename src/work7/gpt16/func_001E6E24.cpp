#include "range.h"
struct Own001E6E24{u8 pad[0x788];u8 state[4];u8 gap[0x7e0-0x78c];u8 sub[4];};
extern Global171*data_0070B728;extern __attribute__((weak)) void func_0065CE98(void*,s32);
inline bool test(Global171*g,void*v){return g->field&&g->field==v;}
void f_001E6E24(Own001E6E24*p){if(test(data_0070B728,p->sub))func_0065CE98(p->state,2);}
