#include "../range_types.h"
struct Child31EF {char pad[0x42];s16 kind;};
struct Obj31EF {char pad[0x2c];Child31EF*child;};
extern "C" void* func_002D55D0(Obj31EF*,s32);
extern "C" bool f_0031EFC4(Obj31EF*p){s32 n=p->child->kind;if(n==43||n==44){func_002D55D0(p,45);return true;}return false;}
