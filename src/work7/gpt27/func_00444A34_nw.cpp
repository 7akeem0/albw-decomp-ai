#include "range.h"
struct Obj444A{u8 pad[0x74];u32 state;u8 pad78[0xa5-0x78];u8 a,b;u8 pada7[0x4bc-0xa7];u8 active;};extern "C"  void func_0066CB14(u32*,s32);
void func_00444A34(Obj444A*p){if(p->a||p->b)return;if(!p->active)return;func_0066CB14(&p->state,2);}
