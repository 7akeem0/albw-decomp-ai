#include "range.h"
struct S{char pad[0x11c];u32 value;};extern u32 func_0057F3D0(S*,u32);
u32 f_57FEF0(S*p,u32 i){if(i-11<=5)return p->value;return func_0057F3D0(p,i);}
