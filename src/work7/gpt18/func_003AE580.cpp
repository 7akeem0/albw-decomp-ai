#include "range.h"
struct Obj3AE{u32 m0;void* model;char pad[0x1c-8];u32 node;};
extern "C" void func_004CEA18(void*,bool,u32);
void func_003AE580(Obj3AE*p){func_004CEA18(p->model,true,p->node);}
