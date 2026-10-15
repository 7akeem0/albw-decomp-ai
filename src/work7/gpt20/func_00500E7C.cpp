#include "ladder_types.h"
struct O500E{char pad[0x8f0];f32 value;};
extern void func_004FABDC(O500E*,u32,s32,u32);
void f_00500E7C(O500E* p){p->value=0.f;func_004FABDC(p,0,-1,0);}
