#include "../../range.h"
extern void func_00108DF8();extern u32 func_00108B98();extern u32 func_00109278(u32,void*);extern void func_0010873C(u32,u32,u32);extern void func_00108F4C();
inline void diagnose(u32 r,u32 pc){u32 sign=r>>31;if(sign)func_0010873C(r,pc,sign);}
void func_0010587C(void*p){func_00108DF8();u32 h=func_00108B98();diagnose(func_00109278(h,p),__current_pc());func_00108F4C();}
