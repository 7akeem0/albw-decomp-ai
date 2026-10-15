#include "range.h"
struct Node{Node*next;};struct O{char pad[0x10];s32 count;u32 reserved;Node**data;Node*head;};void f(O*p){for(s32 i=0;i<p->count;++i){Node*n=p->data[i];n->next=p->head;p->head=n;}p->count=0;}
