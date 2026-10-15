#include "range.h"
struct Inner352 { char pad[0x30]; void* m30; };
struct Arg352 { char pad[0xc]; Inner352* mc; };
extern "C" void func_003522A8(void*,Arg352*);
void func_0035229C(void*,Arg352* p) { func_003522A8(p->mc->m30,p); }
