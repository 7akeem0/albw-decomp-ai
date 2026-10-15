#include "range.h"
struct S {char pad[0x4c0];u32 values[8];};
void f_003F8500(S* p,s64 i,u32 v){if(i<8)p->values[i]=v;}
