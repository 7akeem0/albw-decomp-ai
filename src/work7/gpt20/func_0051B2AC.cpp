#include "ladder_types.h"
struct O51B2 {char pad0[0xdc];void* child;};
extern void func_00472BE4(void*,s32,u8);
extern void func_001B6C2C(void*);
void target(O51B2*p,s32 n,s32 kind){if(p->child){func_00472BE4(p->child,n,(u8)kind);func_001B6C2C(p->child);}}
