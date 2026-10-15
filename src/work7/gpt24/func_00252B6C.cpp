#include "range.h"
struct Object252B {char pad[0x4fc];u32 state;};
extern bool func_001E4A5C(Object252B*,s32,const Vec3_24*);
extern void func_0065FCF8(void*,s32);
bool target(Object252B*p,s32 n,const Vec3_24*v){if(!func_001E4A5C(p,n,v))return false;func_0065FCF8(&p->state,2);return true;}
