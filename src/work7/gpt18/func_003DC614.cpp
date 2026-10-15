#include "range.h"
struct C{char pad[0x68];void*child;};struct O{char pad[0x15dc];C*data[24];};extern void func_003E0DCC(void*);void f(O*p){for(s32 i=0;i<24;++i)func_003E0DCC(p->data[i]->child);}
