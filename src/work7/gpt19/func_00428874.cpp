#include "range.h"
struct N {N* next;u8 pad[0x10];N* prev;};
struct A {u8 pad[0xC0];u32 wC0;u8 gap[0x44];u32 w108;u8 gap2[8];N n114;};
struct S {N* node;A* arg;u32 w8,wC;};
extern "C" void f_00428874(S* s,A* a){s->arg=a;s->w8=a->wC0;s->wC=a->w108;N* n=&a->n114;n->prev=s->node;N* old=s->node;old->next=n;n->prev=old;}
