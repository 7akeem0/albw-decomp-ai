#include "range.h"
struct Obj{u8 pad[0x630];ArrayCounts counts;u32*data;void inc();};
void Obj::inc(){++counts.num;}
void f_00276EAC(Obj*p,u32 value){ArrayCounts c=p->counts;if(c.num<c.capacity){p->data[c.num]=value;p->inc();}}
