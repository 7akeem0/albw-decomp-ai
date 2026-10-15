#include "../range_types.h"
struct Obj28AD{char pad[0x579];u8 active;char gap[0x5d7-0x57a];u8 flag7,flag8;};
extern "C" void*data_00711F50;
extern "C" void func_004EB418(void*,Obj28AD*,s32);
void func_0028ADF0(Obj28AD*p){func_004EB418(data_00711F50,p,1);p->active=1;p->flag8=0;p->flag7=0;}
