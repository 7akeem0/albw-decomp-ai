#include "range.h"
struct Object1913 {char pad[0x4fc];u32 state;};
extern bool func_001E4AE4(Object1913*,s32);
extern void func_0065FCF8(void*,s32);
bool target(Object1913*p,s32 n){if(!func_001E4AE4(p,n))return false;func_0065FCF8(&p->state,1);return true;}
