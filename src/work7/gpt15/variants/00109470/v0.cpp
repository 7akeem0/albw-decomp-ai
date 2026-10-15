#include "../../range.h"
struct S{u8 pad[80];s32 count,capacity;u32*items;};bool func_00109470(S*p,u32 value){if(p->count>=p->capacity)return false;p->items[p->count]=value;++p->count;return true;}
