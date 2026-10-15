#include "range.h"
struct Item;struct Pool{u32 pad;Item* head;u32 pad8;s32 count;};struct Item{Item* next;u8 pad[0x20];Pool* pool;};
void target(Item* p){Pool* q=p->pool;p->next=q->head;q->head=p;--q->count;}
