#include "ladder_types.h"
struct Actor4F98 { char pad[0x3d0]; float pos[3]; };
extern void func_004F9880(void*,Actor4F98*,const float*,int);
void func_004F9874(void* p,Actor4F98* a,int n) {func_004F9880(p,a,a->pos,n);}
