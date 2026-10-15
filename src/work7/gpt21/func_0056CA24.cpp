#include "range.h"
struct S{u32 pad0;u32*ptr;u32 pad8;u8 flag;};
u32 f_56CA24(const S*p){if(!p->flag)return 0;return *p->ptr;}
