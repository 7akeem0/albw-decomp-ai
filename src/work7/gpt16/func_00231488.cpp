#include "range.h"
struct E{u8 pad[0x1c];f32 value;u8 gap[0x18];};struct Array{u8 pad[8];u32 count;E*data;E&at(u32 i){return i<count?data[i]:data[0];}};struct O{u16 kind;s16 index;u32 m4;Array*array;};void f231488(O*p,f32 v){if(p->array&&p->index>=0)p->array->at(p->index).value=v;}
