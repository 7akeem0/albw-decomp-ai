#include "ladder_types.h"
struct Vec4Swap {float x,y,z,w;};
struct Object49AF {Vec4Swap a,b;};
void func_0049AFD0(Object49AF* p) {Vec4Swap t=p->a;p->a=p->b;p->b=t;}
