#include "range.h"
struct SA33 {u8 pad[0xa];u8 flag;};struct CA33 {u8 pad[0x8bc];SA33*child;};struct OA33 {u32 a;CA33*child;u8 gap[0x2c];void*model;};
extern "C" void func_004CF478(void*,u32,u32);
extern "C" void func_0039A33C(OA33*p,u32 n){CA33*c=p->child;void*m=p->model;if(c->child->flag)func_004CF478(m,n,0);else func_004CF478(m,0,0);}
