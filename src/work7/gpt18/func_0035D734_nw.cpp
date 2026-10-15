#include "range.h"
struct S5D7 {u8 pad[0x24];};struct O5D7 {u8 pad[0x960];S5D7 state;s32 value;};
extern "C" bool func_00583B1C(O5D7*);
extern "C"  void func_00666AC0(S5D7*,s32);
extern "C" void func_0035D734(O5D7*p){if(func_00583B1C(p))func_00666AC0(&p->state,p->value);}
