#include "range.h"
extern u32 data_00716134;extern u32 func_00102130(u32);extern void func_003D302C(u32,u32);struct Result{u32 value;};u32 sign(Result r){return r.value>>31;}inline void diagnose(u32 result,u32 pc){Result r={result};if(sign(r))func_003D302C(result,pc);}void f(){u32 result=func_00102130(data_00716134);if((s32)(result&0x80000000u)<0)diagnose(result,__current_pc());}
