#include "range.h"
struct Obj {u32 opaque;void* child;};
extern void func_004CE804(void*,u32,u32,u32);
void f_002D4194(Obj* p,u32 n){if(p->child)func_004CE804(p->child,n,0,0);}
