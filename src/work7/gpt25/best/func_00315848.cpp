#include "../range_types.h"
struct Obj315848{char pad[0x420];void*first;char gap[0x438-0x424];void*second;char gap2[0x494-0x43c];u32 state;};
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_00151148(void*,s32);
extern "C" void f_00315848(Obj315848*p){p->state=0;func_004CF478(p->first,1,0);func_00151148(p->second,1);}
