#include "../range_types.h"
struct State2BECAC{char bytes[0x24];};
struct Obj2BECAC{char pad[0x14];void*child;char gap[0x38-0x18];State2BECAC state;u8 flag;};
extern "C" void func_002C00A8(void*);
extern "C"  void func_00662B58(State2BECAC*,s32);
extern "C" void f_002BECAC(Obj2BECAC*p,bool on){func_002C00A8(p->child);if(on)p->flag=1;func_00662B58(&p->state,0);}
