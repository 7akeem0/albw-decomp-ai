#include "range.h"
struct C145 {u8 pad[0x1e];u16 flags;};
extern "C" void f_003E1464(C145* t,u32 n){t->flags=(t->flags&~3u)|(n&3u);}
