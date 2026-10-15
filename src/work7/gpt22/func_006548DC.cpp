#include "range.h"
extern "C" void func_004FABDC(EnemyTail22*,s32,s32,s32);
extern "C" u32 func_00111A64(void*);
extern "C" void*data_007124F0;
inline u32 below(void*r,u32 n){return(u32)(((unsigned long long)func_00111A64(r)*n)>>32);}
void target(EnemyTail22*p){func_004FABDC(p,0,-1,0);for(s32 i=0;i<3;i++)(&p->vx)[i]=0;u32 n=below((u8*)data_007124F0+0x660,0x671c71c7);if(n&1)n=-n;p->angle8d8=n;p->half8e0=100;}
