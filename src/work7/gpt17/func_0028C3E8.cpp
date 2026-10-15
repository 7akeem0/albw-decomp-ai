#include "range.h"
struct Obj {u8 pad[0x10];void* child;};
extern void func_004D0194(void*,u32);
extern void func_004D0268(void*,u32);
void f_0028C3E8(Obj* p,u32 a,u32 b){func_004D0194(p->child,a);func_004D0268(p->child,b);}
