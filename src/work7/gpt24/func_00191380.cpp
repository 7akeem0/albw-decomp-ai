#include "range.h"
struct Object1913 {char pad[0x4f8];u32 state;};
extern bool func_001E4AE4(Object1913*,s32);
extern void func_006597CC(void*,s32);
bool target(Object1913*p,s32 n){if(!func_001E4AE4(p,n))return false;func_006597CC(&p->state,1);return true;}
