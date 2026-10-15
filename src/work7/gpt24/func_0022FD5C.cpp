#include "range.h"
extern SelectionManager24* data_0070D7D0;extern void func_0030C88C(void*);
struct Object22FD{char pad[0x108];u32 sub;};
void target(Object22FD*p){if(data_0070D7D0->child->selected==&p->sub)data_0070D7D0->child->selected=0;func_0030C88C(&p->sub);}
