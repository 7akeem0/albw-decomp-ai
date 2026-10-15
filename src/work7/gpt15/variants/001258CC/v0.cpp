#include "../../range.h"
struct S{char pad[0x3dc];Vec3 velocity;};extern "C" void func_004FD268(S*);extern "C" void func_001258CC(S*p){func_004FD268(p);for(int i=0;i<3;++i)(&p->velocity.x)[i]=0.0f;}
