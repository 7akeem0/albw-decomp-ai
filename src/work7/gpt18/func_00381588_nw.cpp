#include "range.h"
struct O{char pad[0xa4c];s8 mode;};extern void func_006678C0(void*,s32);extern void func_004FB05C(O*);void f(O*p){if(p->mode!=1&&p->mode!=0)func_006678C0((char*)p+0xa48,0);func_004FB05C(p);}
