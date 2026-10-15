#include "range.h"
struct E{char pad[0x10];f32 rate;};struct A{char pad[0xc];u32 count,max;E*data;E&at(u32 i){if(i<count)return data[i];return data[0];}};struct O{char pad[0x444];A*a,*b,*c;};void f(O*p){p->a->at(0).rate=1.f;p->b->at(0).rate=1.f;p->c->at(0).rate=1.f;}
