#include "../range_types.h"
struct Obj2747 {char pad[0x34];void*child;char gap[0x2c];u32 state;};
extern "C" bool func_00547B48(void*,s32);
extern "C"  void func_00660CE8(u32*,s32);
extern "C" void f_00274878(Obj2747*p){if(!func_00547B48(p->child,0))func_00660CE8(&p->state,2);}
