#include "../range_types.h"
struct Obj2BC5 {char pad[0x8bc];u32 state;u8 kind;};
extern "C"  void func_00662A14(u32*,s32);
extern "C" bool f_002BC580(Obj2BC5*p){if(p->kind!=2)return false;func_00662A14(&p->state,3);return true;}
