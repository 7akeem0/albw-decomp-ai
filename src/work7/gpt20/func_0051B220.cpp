#include "ladder_types.h"
struct Child51B2{char pad[0xb8];u32 sub;};
struct O51B2{char pad[0xdc];Child51B2* child;};
extern void func_002317C0(void*,f32);
void f_0051B220(O51B2* p){if(p->child)func_002317C0(&p->child->sub,1.f);}
