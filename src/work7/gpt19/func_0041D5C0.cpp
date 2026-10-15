#include "range.h"
struct S {S();char pad[0x80];u32 sub;};
extern void* func_0041C81C();extern void func_0041C880(void*,u32*);
S::S(){void* manager=func_0041C81C();func_0041C880(manager,&sub);}
