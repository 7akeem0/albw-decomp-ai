#include "../range_types.h"
struct Obj2DF3 {char pad[0x17];u8 flag;};
extern "C" void func_00102A2C(s32);
extern "C" void f_002DF3F0(Obj2DF3*p){if(!p->flag){func_00102A2C(1);p->flag=1;}}
