#include "range.h"
extern  void func_0066EEEC(void*,s32);
struct Obj4836 {u8 pad[0x74];u32 state;u8 pad78[0xea-0x78];u16 timer;u8 flag;};
void func_004836E8(Obj4836* p){p->timer=120;p->flag=1;func_0066EEEC(&p->state,1);}
