#include "range.h"
struct Node412 {Node412* next;};
struct Queue412 {u8 pad[0x16c];Node412* head;Node412* tail;u32 count;};
u32 func_00412C68(Queue412* p,Node412* n){if(p->tail==0)p->head=n;else p->tail->next=n;p->tail=n;n->next=0;return p->count;}
