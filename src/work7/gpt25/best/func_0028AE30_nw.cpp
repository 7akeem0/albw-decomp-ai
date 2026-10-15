#include "../range_types.h"
struct Obj28AE {char pad[0x4f4];u32 state;u8 kind;char gap[0xdd];u8 flag;void setFlag(u8 n);};
void Obj28AE::setFlag(u8 n){flag=n;}
extern "C"  void func_00661708(u32*,s32);
extern "C" void f_0028AE30(Obj28AE*p){p->setFlag(1);if(p->kind==0)func_00661708(&p->state,4);}
