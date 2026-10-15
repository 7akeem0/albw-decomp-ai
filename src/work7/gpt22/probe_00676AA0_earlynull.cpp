#include "range.h"
struct Payload{u8 data[20];Payload();};struct Node{Node*next,*prev;};struct Elem{Node node;Payload payload;};struct Root{Node*next,*prev;void*pool;};
extern "C" void*func_003DA498(void*,s32);inline void*operator new(unsigned,void*p)throw(){return p;}
void target(Elem**out,Root*root){Elem*e=(Elem*)func_003DA498(root->pool,2);if(!e){*out=0;return;} {new(&e->payload)Payload;e->node.next=root->next;e->node.prev=(Node*)root;root->next=&e->node;e->node.next->prev=&e->node;}*out=e;}
// Payload constructor00676A20.
