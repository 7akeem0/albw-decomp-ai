#include "ladder_types.h"
struct O4C04 {char pad0[0x9c6];u8 kind;};
extern void func_001E6AB4(O4C04*,u32);
extern void func_004C0508(O4C04*,u32);
void f_004C04F0(O4C04* p,u32 a){if(p->kind==10)func_004C0508(p,a);else func_001E6AB4(p,a);}
