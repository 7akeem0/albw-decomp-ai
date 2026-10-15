#include "range.h"
struct S{char pad[0x18];u32 length,pos;};
void f_00409D68(S*p,u32 n,u32 origin){switch(origin){case 0:p->pos=n;break;case 1:p->pos+=n;break;case 2:p->pos=p->length-n;break;}}
