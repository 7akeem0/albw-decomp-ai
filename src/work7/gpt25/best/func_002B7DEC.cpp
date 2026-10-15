#include "../range_types.h"
struct Child2B7DEC{char pad[11];s8 mode;};
struct Obj2B7DEC{char pad[0x8bc];Child2B7DEC*child;};
extern "C" f32 f_002B7DEC(Obj2B7DEC*p){s32 mode=p->child->mode;if(mode==1)return .5f;if(mode!=2)return 1.f;return .25f;}
