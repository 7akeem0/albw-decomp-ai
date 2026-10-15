#include "range.h"
struct O{char pad[0xc];const u16*data;u32 count;};u32 f(O*p,MessageRequest18<u16>*q){q->p->code=0;q->p->kind=p->data[p->count];++p->count;return 0;}
