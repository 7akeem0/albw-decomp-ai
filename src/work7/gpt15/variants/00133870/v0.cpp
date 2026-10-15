#include "../../range.h"
struct A{u32 a,n;void**p;};extern "C" void func_0013388C(void*,void*);extern "C" void func_00133870(A*a,u32 i,void*x){u32 n=a->n;void**p=a->p;if(n>i)p+=i;func_0013388C(*p,x);}
