#include "range.h"
struct S{char pad[0xc];void**items;};extern s32 func_00564908(void*,u32);
s32 f_5648EC(S*p,u32 a,u32 i){void*e=p->items[i];if(!e)return -1;return func_00564908(e,a);}
