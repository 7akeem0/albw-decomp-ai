#include "range.h"
extern "C" void func_0047F9CC(void*,u8);
struct Obj474 {u8 pad[0xc8];u32 kind;u8 padcc[0xf8-0xcc];u8 id;u8 padf9[3];void*child;u8 active;};
void func_00474A24(Obj474*p){if(p->kind==8){func_0047F9CC(p->child,p->id);p->active=0;}}
