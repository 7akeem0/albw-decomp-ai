#include "../../range.h"
struct S{u32*data[2];u32 count[2],capacity[2];};extern void func_0010E3C4(void*,const void*,u32);
void func_00112F38(S*p,const void*src,u32 n,u32 i){if(p->capacity[i]<n)return;p->count[i]=n;func_0010E3C4(p->data[i],src,n*4);}
