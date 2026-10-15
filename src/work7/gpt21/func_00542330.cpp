#include "range.h"
struct Child{u32 pad0;f32 value;};struct S{char pad[0x20];Child*child;};
f32 f_542330(void*,const S*p){return p->child->value!=1.0f?0.8f:1.5f;}
