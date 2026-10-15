#include "../range_types.h"
struct Obj_2C7768 {char pad[0x40c];u32 state;};
extern "C" bool func_00588BF0(Obj_2C7768*,s32);
extern "C"  void func_006632F0(u32*,s32);
extern "C" void f_002C7768(Obj_2C7768*p){if(func_00588BF0(p,0))func_006632F0(&p->state,1);}
