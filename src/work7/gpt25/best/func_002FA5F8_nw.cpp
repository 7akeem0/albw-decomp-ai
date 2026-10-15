#include "../range_types.h"
struct Obj_2FA5F8 {char pad[0x8bc];u32 state;};
extern "C" bool func_00521060(Obj_2FA5F8*);
extern "C"  void func_00664230(u32*,s32);
extern "C" void f_002FA5F8(Obj_2FA5F8*p){if(func_00521060(p))func_00664230(&p->state,2);}
