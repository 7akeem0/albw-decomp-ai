#include "range.h"
struct Obj1A4524{char pad[0x8fd];u8 state;};
struct Request1A4524{char pad[0x24];s8 kind;};
extern void*data_0070FB60;
extern bool func_002917D4(void*,u32,f32);
extern bool func_00291A04(void*,f32);
void phase(void*g,s32 k){f32 rate=.3f;if(k==5)func_002917D4(g,0,rate);else if(k==8)func_00291A04(g,rate);}
extern "C" void target(Obj1A4524*p,void*,const Request1A4524*r){s32 k=r->kind;if(p->state==1)phase(data_0070FB60,k);}
