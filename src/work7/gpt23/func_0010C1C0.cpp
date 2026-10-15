#include "range.h"
typedef void(*CallbackSix)(void*,u32,u32,u32,u32,u32);
extern CallbackSix data_0071495C;
extern "C" void func_0010D0EC(void*,u32,u32);
inline void dispatch(void*p,u32 value){CallbackSix c=data_0071495C;if(c){u32 zero=0;data_0071495C=0;c(p,zero,zero,zero,zero,value);}}
extern "C" void func_0010C1C0(void*p,u32,u32 value){dispatch(p,value);func_0010D0EC(p,0,0);}
