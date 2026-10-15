#include "ladder_types.h"
extern void func_00600148(u32,u32*);
extern void func_005FF418(u32);
extern void func_005FF850(u32,u32);
u32 target(u32 a,u32 b){u32 result;func_00600148(1,&result);func_005FF418(result);func_005FF850(a,b);return result;}
