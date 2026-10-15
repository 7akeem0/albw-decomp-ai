#include "../../range.h"
struct S{u8 pad[0x3dc];Vec3 velocity;u8 gap[0x4f4-0x3e8];void*model;u8 gap4F8[0x54c-0x4f8];void*child;};extern void func_004CF478(void*,s32,s32);extern void func_00151148(void*,s32);extern void func_003249B4(S*);void func_0013D7A0(S*p){func_004CF478(p->model,1,0);func_00151148(p->child,0);p->velocity.setZero();func_003249B4(p);}
