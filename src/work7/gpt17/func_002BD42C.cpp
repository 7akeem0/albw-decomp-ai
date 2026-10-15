#include "range.h"
struct Obj {u8 pad[0x3a4];s32 id;u8 gap[0x95c-0x3a8];u8 flag;};
extern void func_004F88A0(Obj*,s32);
extern u32 func_004FABDC(Obj*,s32,s32,s32);
u32 f_002BD42C(Obj*p){func_004F88A0(p,p->id);p->flag=0;return func_004FABDC(p,8,-1,0);}
