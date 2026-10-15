#include "range.h"
struct RecordFD{u32 words[6];};
struct HeaderFD{u32 a,b,offset;u16 count,flags;u8 data[1];};
struct ViewFD{u8*data;u16 count,flags;RecordFD*start,*end;};
void func_003FD69C(ViewFD*p,HeaderFD*h){p->data=h->data;u16 n=h->count;p->count=n;p->flags=h->flags;p->start=(RecordFD*)((u8*)h+h->offset);u32 offset=h->offset+n*sizeof(RecordFD);p->end=(RecordFD*)((u8*)h+offset);}
