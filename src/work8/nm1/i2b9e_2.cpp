#include "../../work7/gpt17/range.h"
struct Child{u8 pad[8];s8 limit;};struct Obj{u8 pad[0x508];s16 amount;u8 pad50a[0x3b2];Child*child;};extern void func_004FC78C(Obj*,s32);
void f_002B9EA4(Obj*p,s32 n){s32 add=p->amount;if(add<0)add=0;n+=add;s32 limit=p->child->limit;n=(limit<n)?limit:n;func_004FC78C(p,n);}
