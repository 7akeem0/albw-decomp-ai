#include "range.h"
struct Owner444{u8 pad[0x74];u32 state;u8 gap78[0x4b8-0x78];u16 count;u8 gap4ba;u8 active;};
extern "C"  void func_0066CB14(void*,s32);
void func_0044482C(Owner444*p){u16 n=p->count;++n;p->count=n;if(n<200)return;p->active=0;func_0066CB14(&p->state,3);}
