#include "../range_types.h"
struct Mgr29B9;
extern Mgr29B9* data_00712450;
struct Obj29B9 {char pad[0xbc];u32 state;};
extern "C" bool func_00520A8C(Mgr29B9*);
extern "C" __attribute__((weak)) void func_00661C18(u32*,s32);
extern "C" void f_0029B99C(Obj29B9*p){if(!func_00520A8C(data_00712450))func_00661C18(&p->state,1);}
