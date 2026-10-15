#include "range15.h"
struct S{char pad[0xc];void*a;};extern "C" void func_001223FC(void*,void*);extern "C" void func_001223E4(S*p,char*q){char* qq=q;void* a=p->a;func_001223FC(qq+0x216c,a);}
