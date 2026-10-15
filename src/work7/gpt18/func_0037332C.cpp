#include "range.h"
struct G{char pad[0x1c];s32 a;char gap[12];s32 b;};extern G*data_0070B728;struct O;extern __attribute__((weak))void func_00667258(void*,s32);void f(O*p){if(data_0070B728->a>0||data_0070B728->b>0)return;func_00667258((char*)p+0x98c,0);}
