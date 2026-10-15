#include "ladder_types.h"
struct A {char pad[12];u8 a;s8 b;};
struct Sub {void g(u8,s8);};struct B {char pad[128];Sub sub;};
extern void func_004C8510(void*,u8,s8);
void f(A* a,B* b){u8 x=a->a;s8 y=a->b;B* q=b;func_004C8510(&q->sub,x,y);}
