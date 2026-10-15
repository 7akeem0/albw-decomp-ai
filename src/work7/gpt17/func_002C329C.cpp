#include "range.h"
struct Obj{u8 pad[0x10];ObjectNode root;};
extern void func_002FFDE8(void*);
void f_002C329C(Obj*p){ObjectNode*end=&p->root;for(ObjectNode*n=end->next;n!=end;n=n->next)func_002FFDE8(n->object);}
