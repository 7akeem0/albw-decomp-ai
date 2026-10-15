#include "range.h"
struct PD060 {u32 a,b;};
extern "C" const PD060*func_003DCE04(PD060*);
extern "C" void func_003DD07C(PD060*,const PD060*);
extern "C" void func_003DD060(PD060*p){const PD060*q=func_003DCE04(p);func_003DD07C(p,q);}
