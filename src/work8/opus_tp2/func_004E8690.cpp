#include "../../work7/gpt16/range.h"
extern const Vec3*func_00559B54(void*);extern void func_0037C574(void*,s32);
void f_001CD024(Obj1CD02*p){Vec3*d=&p->velocity;const Vec3*v=func_00559B54(p);*d=*v;if(*(s16*)((u8*)p+0x5a)<0)func_0037C574(p,-1);}
