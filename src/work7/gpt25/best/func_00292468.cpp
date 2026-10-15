#include "../range_types.h"
struct Data_292468 {u16 kind,pad;u8 flag;};
struct Obj_292468 {char pad[0x48];void*states;};
extern "C" Data_292468* func_002D55D0(void*,s32);
extern "C" bool f_00292468(Obj_292468*p,u8 n){Data_292468*s=func_002D55D0(p->states,126);if(s){s->flag=n;s->kind=115;}return true;}
