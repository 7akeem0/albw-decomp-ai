#include "range.h"
struct Child23DE24{char pad[0xd];u8 a,b;};
struct Obj23DE24{char pad[0x7d4];Child23DE24*child;};
extern bool func_00575C2C(Child23DE24*);
extern "C" s32 target(Obj23DE24*p,u32 unused1,u32 unused2,s32 mode){if(!mode&&p->child&&(p->child->a||p->child->b))return func_00575C2C(p->child)?1:-1;return 0;}
