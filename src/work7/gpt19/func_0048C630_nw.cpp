#include "range.h"
struct A {char pad[0x10];void* child;};struct S {char pad[0x5c];void* child;};
extern __softfp  void func_00489F74(void*,u32,A*,u32,f32);
__softfp void f_0048C630(S* p,u32 a,A* b,u32 c,f32 v){p->child=b->child;func_00489F74(p->child,a,b,c,v);}
