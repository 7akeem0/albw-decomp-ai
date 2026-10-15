#include "range.h"
typedef unsigned long long u64;
extern u32 func_0056137C(void*,u64*);
extern void func_0010AC24(u32,u32);
struct Result{u32 v;};u32 sign(Result v){return v.v>>31;}inline void diagnose(u32 result,u32 pc){Result v={result};if(sign(v))func_0010AC24(result,pc);}
u64 f_5612B8(void*p){void*sub=(char*)p+4;u64 value;u32 result=func_0056137C(sub,&value);diagnose(result,__current_pc());return value;}
