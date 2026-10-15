#include "range.h"
extern u32 data_0070A89C;
extern "C" bool func_0051D27C(s32*,s32,u32);
extern "C" void func_0065650C(StateMgrBlock*,s32) __attribute__((weak));
inline void change(Actor1243* p,s32 mode){func_0065650C(&p->state,mode?5:4);}
inline bool adjust(Actor1243* p,s32 t,u32 step){return func_0051D27C(&p->angle,t,step);}
extern "C" void func_001243CC(Actor1243* p){if(adjust(p,p->target,data_0070A89C)){if(p->mode==0)func_0065650C(&p->state,4);else func_0065650C(&p->state,5);}}
