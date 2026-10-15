#include "range.h"
extern "C" void func_00106394(s64);extern "C" void func_00106348(s32);
inline u64 mul(u32 a,u32 b){return(u64)a*b;}
void spin(const u64&n){func_00106348((s32)n);}
extern "C" void func_00104338(s64 d){if(d>=0x3477)func_00106394(d);else{u32 low=mul((u32)d,0x44a2fa85u)>>32;u32 high=mul((u32)(d>>32),0x44a2fa85u);spin((u64)low+high);}}
