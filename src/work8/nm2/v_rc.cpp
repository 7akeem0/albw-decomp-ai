#include "range.h"
extern u32 func_003C9C94(void*,u32*,void*,u32);extern void func_0010AC24(u32,u32);struct Result{u32 value;};u32 sign(Result r){return r.value>>31;}inline void diagnose(u32 result,u32 pc){Result r={result};if(sign(r))func_0010AC24(result,pc);}u32 f(void*p,void*a,u32 b){u32 out;void* pp=(char*)p+4;diagnose(func_003C9C94(pp,&out,a,b),__current_pc());return out;}

