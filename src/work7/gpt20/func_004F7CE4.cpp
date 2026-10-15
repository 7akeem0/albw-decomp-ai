#include "ladder_types.h"
struct Child4F7C {virtual void run();};
struct O4F7C {char pad0[0x804];Child4F7C* child;};
extern void func_004F5BD8(O4F7C*,s32,s32);
void target(O4F7C*p){if(p->child)p->child->run();else func_004F5BD8(p,0,0);}
