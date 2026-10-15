#include "range.h"
void f17A4F8(Obj17A4*p,u16 n){u16 id=p->id;u8 c=p->count;if(id==0){u32 t=p->limit;if((u32)c>=t)p->id=n;}p->count=c+1;}
