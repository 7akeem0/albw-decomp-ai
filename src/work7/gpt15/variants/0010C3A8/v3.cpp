#include "../../range.h"
struct M{char pad[0x12];u16 flags;u32 exchange(u32 v){u16 old=flags;u32 ret=old&1;v&=1;old&=~1;flags=v|old;return ret;}};struct S{char pad[0x24];M m;};extern "C" u32 func_0010C3A8(S*p,u32 v){return p->m.exchange(v);}
