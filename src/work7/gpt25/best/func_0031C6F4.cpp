#include "../range_types.h"
struct Obj31C6{char pad[0x20];u8 node[0x30];u32 state;};
extern "C" void*data_0070B728;
extern "C" bool func_004CDDEC(void*,void*,bool);
extern "C" __attribute__((weak)) void func_006653E8(u32*,s32);
void func_0031C6F4(Obj31C6*p){if(func_004CDDEC(data_0070B728,p->node,false))func_006653E8(&p->state,5);}
