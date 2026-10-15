#include "range.h"
struct S {void* owner;};
extern "C" void func_003F7FB0(void*,S*);
void f_003F7FA0(S* p){void* q=p->owner;func_003F7FB0(q,p);}
