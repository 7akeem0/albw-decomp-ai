#include "range.h"
struct Object257A { char prefix[0xc]; char sub[0x66-0xc]; u8 initialized; };
extern void func_0048BCBC(void*,s32);
void target(Object257A* p,s32 n){ if(!p->initialized){func_0048BCBC(p->sub,n);p->initialized=1;} }
