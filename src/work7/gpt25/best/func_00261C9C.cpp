#include "../range_types.h"
struct Obj261C9C{char pad[0x3dc];Vec3 velocity;char gap[0x59c-0x3e8];Flag32 flags;};
extern "C" void func_004F8638(Obj261C9C*,s32);
extern "C" void f_00261C9C(Obj261C9C*p){func_004F8638(p,-1);p->flags.reset(128);p->velocity.setZero();}
