#include "range.h"
struct S{char pad[0x98];u8 flag;char pad99[0x114-0x99];u32 sub;};extern u32 func_0056D5AC(u32*,u32);
u32 f_56A1A4(S*p,u32 i){if(!p->flag)return 0;return func_0056D5AC(&p->sub,i);}
