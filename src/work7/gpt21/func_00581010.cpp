#include "range.h"
struct C{char pad[0xc];void*object;};struct S{char pad[0xc];C*child;};struct Out{void*p;u32 words[3];};extern void*func_00111008(void*,const char*);
void f_581010(S*p,Out*out,const char* id){void*r=func_00111008(p->child->object,id);if(r)out->p=r;else out->p=0;out->words[0]=0;out->words[1]=0;out->words[2]=0;}
