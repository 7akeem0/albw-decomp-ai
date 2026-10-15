#include "ladder_types.h"
extern void func_001E6AB4(O4C1D*,u32);
extern void func_004C0508(O4C1D*,u32);
void f_004C1E44(O4C1D* p,u32 a){if(p->kind==10)func_004C0508(p,a);else func_001E6AB4(p,a);}
