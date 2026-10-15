#include "range.h"
struct C{char pad[0x50];u8 kind;char gap[0x90-0x51];u8 a,reserved,b;};struct O{char pad[0x1d4];u32 a,reserved,b;char gap[0x1e9-0x1e0];u8 kind;char gap1ea[2];C*child;};void f(O*p){if(p->kind==2){C*c=p->child;if(c->kind!=2||c->a!=c->b)p->a=p->b;}}
