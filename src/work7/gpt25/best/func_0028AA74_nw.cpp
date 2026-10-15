#include "../range_types.h"
struct Obj28AA {char pad[0x4f4];u32 state;u8 kind;};
extern "C"  void func_00661708(u32*,s32);
extern "C" bool f_0028AA74(Obj28AA*p){if(p->kind==5){func_00661708(&p->state,0);return true;}return false;}
