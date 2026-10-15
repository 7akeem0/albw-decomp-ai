#include "range.h"
struct C{virtual void reset();};struct O{char pad[0x14];C*child;char p18[0x18];u32 value;};void f(O*p){if(p->child)p->child->reset();p->value=0;}
