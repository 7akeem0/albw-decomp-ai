#include "../range_types.h"
struct Obj2BF8D4{char pad[0x14];void*child;char gap[0x38-0x18];char state[0x24];u8 flag5c,flag5d;};
extern "C" void func_002C00A8(void*);
extern "C"  void func_00662C9C(void*,s32);
extern "C" void f_002BF8D4(Obj2BF8D4*p,bool on){func_002C00A8(p->child);if(on)p->flag5c=1;p->flag5d=1;func_00662C9C(p->state,0);}
