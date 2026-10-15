#include "ladder_types.h"
struct Child4C6D {char pad0[6];s8 value;};
struct O4C6D {char pad0[0x51c];Child4C6D* child;};
extern "C" void func_004C6C64(O4C6D*,u32,s32,u32,u32);
extern "C" void func_004C6D98(O4C6D*p,u32 a,u32 b){s32 value=0;if(p->child){value=p->child->value;if(value<0)value=0;}func_004C6C64(p,0,value,a,b);}
