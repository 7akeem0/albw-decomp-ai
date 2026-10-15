#include "range.h"
struct S{u8 pad[0x28];void* m28;u8 pad2c[0x10];u8 m3C;};
extern "C" void func_002313DC(void*);
void f_00421D14(S* p){p->m3C=0;func_002313DC(p->m28);}
