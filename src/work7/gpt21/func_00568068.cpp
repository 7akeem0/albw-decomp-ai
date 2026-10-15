#include "range.h"
struct R{char pad[6];u16 kind;};struct S{char pad[0xc];R**data;};extern void func_005680A0(R*,void*,f32);
__attribute__((weak)) void func_00690E0C(R*,void*,f32);void f_568068(S*p,void*out,u32 index,f32 frame){if(p->data[0]->kind==9)return;R*r=p->data[index];if(r->kind==7)func_005680A0(r,out,frame);else func_00690E0C(r,out,frame);}
