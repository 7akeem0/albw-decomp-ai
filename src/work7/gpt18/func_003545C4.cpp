#include "range.h"
struct C{char pad[0x158];f32 value;};struct O{char pad[0x40c];C*child;char gap[0x59c-0x410];u32 flags;char gap5a0[0x9d0-0x5a0];f32 value;};void f(O*p){if(p->child){p->child->value=1.f;p->flags|=1;}p->value=0.f;}
