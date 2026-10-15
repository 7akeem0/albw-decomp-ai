#include "range.h"
struct S{u8 pad[0x10];f32 scale,offset;};struct Value{u16 pad,value;};extern "C" Value* func_0067D648(S*);
f32 target(S* p){u16 n=func_0067D648(p)->value;f32 b=p->offset;f32 a=p->scale;return b+n*a;}
