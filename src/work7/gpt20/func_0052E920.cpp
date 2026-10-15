#include "ladder_types.h"
struct O52E9 {char pad0[0x614];void* actor;char pad618[8];void* child;};
extern s32 func_0053FF0C(void*,s32);
bool target(O52E9*p,s32 n){if(p->child){if(func_0053FF0C(p->actor,n)==0)return true;}return false;}
