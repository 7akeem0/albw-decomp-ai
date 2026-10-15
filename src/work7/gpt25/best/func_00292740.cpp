#include "../range_types.h"
struct Data_292740 {u16 kind,pad;u8 flag;};
struct Obj_292740 {char pad[0x48];void*states;};
extern "C" Data_292740* func_002D55D0(void*,s32);
extern "C" bool f_00292740(Obj_292740*p,u8 n){Data_292740*s=func_002D55D0(p->states,126);if(s){s->flag=n;s->kind=114;}return true;}
