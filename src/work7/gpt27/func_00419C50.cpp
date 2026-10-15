#include "range.h"
struct Link419 {Link419*prev,*next;};struct List419 {s32 count;Link419 root;};struct Dest419{u32 pad;List419 from,to;};struct Input419{u8 pad[0x58];Link419 node;};extern "C" void func_00111EF0(List419*,Link419*);extern "C" Link419*func_00112364(List419*,Link419*,Link419*);
void erase(List419*p,Input419*q){func_00111EF0(p,&q->node);}
void append(List419*p,Input419*q){List419*l=p;Link419*root=&l->root;func_00112364(l,root,&q->node);}void func_00419C50(Dest419*p,Input419*q){erase(&p->from,q);append(&p->to,q);}
