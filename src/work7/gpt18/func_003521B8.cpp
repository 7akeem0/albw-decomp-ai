#include "range.h"
struct O{char pad[0x2e];u16 kind;};extern void func_002C40D8(O*);extern void func_003521F0(void*,bool);void f(O*p){func_002C40D8(p);if(p->kind!=15)func_003521F0((char*)p+0x324,false);else func_003521F0((char*)p+0x324,true);}
