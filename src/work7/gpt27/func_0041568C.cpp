#include "range.h"
struct Item4156 {u32 pad;Link27 node;};
extern "C" void func_0010C0C0(void*);extern "C" void func_0010C160(void*);extern "C" void func_00111EF0(List27*,Link27*);
void erase(List27*l,Item4156*q){func_00111EF0(l,&q->node);}
struct Scope {Mutex27*m;Scope(Mutex27*p):m(p){func_0010C0C0(m);}~Scope(){func_0010C160(m);}};void func_0041568C(Obj415Shared*p,Item4156*q){Scope lock(&p->mutex);erase(&p->queue,q);}
