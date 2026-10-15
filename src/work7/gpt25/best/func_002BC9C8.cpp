#include "../range_types.h"
struct Child2BC9 {char pad[0x2c];Flag32 flags;};
struct Obj2BC9 {char pad[0x3a4];u32 animation;char gap[0x7c];Child2BC9*child;char gap2[0x534];u8 flag;void clear();};
void Obj2BC9::clear(){flag=0;}
extern "C" void func_004F88A0(Obj2BC9*,u32);
extern "C" void f_002BC9C8(Obj2BC9*p){func_004F88A0(p,p->animation);p->clear();p->child->flags.v|=0x100000;}
