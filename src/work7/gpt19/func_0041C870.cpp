#include "range.h"
struct S{u32 m0,m4;};
extern "C" void func_00112364(S*,u32*,u32*);
void f_0041C870(S* p,S* a){S* q=a;u32* first=&p->m4;func_00112364(p,first,&q->m4);}
