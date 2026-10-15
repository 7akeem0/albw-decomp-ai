#include "../../range.h"
struct S{char pad[0x14];void* receiver;u32 reserved;void*arg;};extern "C" void func_002C00D4(void*,S*,void*);extern "C" void func_0012CBA4(S*p){if(p->arg)func_002C00D4(p->receiver,p,p->arg);}
