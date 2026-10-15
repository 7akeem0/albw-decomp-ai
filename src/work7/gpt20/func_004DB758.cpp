#include "ladder_types.h"
struct O4DB7 {char pad0[0x9bc];u8 kind;};
extern void func_001E6AB4(O4DB7*,u32);
extern void func_004C0508(O4DB7*,u32);
void f_004DB758(O4DB7* p,u32 a){if(p->kind==10)func_004C0508(p,a);else func_001E6AB4(p,a);}
