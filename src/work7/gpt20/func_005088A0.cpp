#include "ladder_types.h"
struct O5088 {char pad0[0x40c];void* model;char pad410[0x18];Child4CEA* child;};
extern bool func_0014F794(O5088*);
extern void func_004CF478(void*,s32,s32);
bool target(O5088*p){bool value=func_0014F794(p);func_004CF478(p->model,value,0);p->child->flag=value;return value;}
