#include "range.h"
struct S{char pad[0x24];f32 value;u32 pad28,index;};struct G{char pad[0x14];u32 offset;};extern G data_00710DA8;
u32 f_54C998(S*p,u32 fallback){if(p->value>0.0f)return p->index+data_00710DA8.offset;return fallback;}
