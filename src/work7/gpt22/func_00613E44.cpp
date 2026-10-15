#include "range.h"
struct S {u8 pad[0x9c7]; u8 flag;};
extern "C" void func_00613E58(S*);
void f_00613E44(S* p){if(p->flag)p->flag=0;func_00613E58(p);}
