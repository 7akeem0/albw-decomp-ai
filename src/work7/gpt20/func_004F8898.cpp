#include "ladder_types.h"
struct Actor4F8 { char pad[0x3a4]; void* m3a4; };
extern void func_004F88A0(Actor4F8*,void*);
void func_004F8898(Actor4F8* p) { func_004F88A0(p,p->m3a4); }
