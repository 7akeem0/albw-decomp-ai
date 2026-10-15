#include "range.h"
struct Obj48C {void*child;u32 queue;};extern "C" void func_006766E8(void*);extern "C" void func_0058FA08(void*);
void func_0048C0C0(Obj48C*p){func_006766E8(&p->queue);if(p->child){func_0058FA08(p->child);p->child=0;}}
