#include "../range_types.h"
struct Obj311B{char pad[0x9d1];u8 active;char gap[0xa36-0x9d2];u8 mode;};
extern "C" bool func_00312018(Obj311B*,s32);
extern "C" bool func_00312CA0(Obj311B*,s32);
extern "C" bool func_00313418(Obj311B*,s32);
bool func_00311B84(Obj311B*p,s32 a){if(p->active)return func_00312018(p,a);switch(p->mode){case 0:return func_00313418(p,a);case 1:return func_00312CA0(p,a);default:return true;}}
