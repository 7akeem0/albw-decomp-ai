#include "ladder_types.h"
struct O4A4A {char pad0[0x38];u32 sub;};
extern void func_001B6C04(O4A4A*);
extern void func_0066F7C8(void*,u32) ;
void f_004A4AC4(O4A4A* p){func_001B6C04(p);func_0066F7C8(&p->sub,0);}
