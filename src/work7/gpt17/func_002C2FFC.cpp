#include "range.h"
struct Child {virtual void v0(bool);virtual void v1(bool);virtual void v2(bool);virtual void v3(bool);virtual void v4(bool);};struct Node {Node*prev,*next;Child*obj;};struct Obj {u8 pad[0x10];Node head;};
void f_002C2FFC(Obj*p){Node*end=&p->head;for(Node*it=p->head.next;it!=end;it=it->next)it->obj->v4(true);}
