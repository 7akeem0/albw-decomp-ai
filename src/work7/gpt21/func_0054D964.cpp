#include "range.h"
struct Sub { char pad[0x18]; u32 data; };
struct S { u32 m0; u32 m4; char pad[0x2d0-8]; Sub* sub; };
extern void* func_0054D978(u32*,u32*,u32);
void* f_54D964(S* p,u32 i) { Sub* sub=p->sub; u32* owner=&p->m4; return func_0054D978(&sub->data,owner,i); }
