#include "ladder_types.h"
struct Sub4BDB {char pad0[0x61];u8 flag;};
struct Child4BDB {char pad0[0x44];u8 flag;};
struct O4BDB {char pad0[0x410];Sub4BDB sub;char pad472[0x3fa];Child4BDB* child;};
void f_004BDB04(O4BDB* p){Sub4BDB* s=&p->sub;if(s)s->flag=0;if(p->child)p->child->flag=0;}
