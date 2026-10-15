#include "range.h"
struct Obj407D;struct Item407D{u8 pad[8];Obj407D*owner;u8 padc[0x1c-0xc];Link27 node;};struct Obj407D{u8 pad[0x18];List27 list;u8 pad24[0x38-0x24];u32 count;};
extern "C" Link27* func_00112364(List27*,Link27*,Link27*);
void append(List27*l,Link27*r,Item407D*q,Obj407D*p){q->owner=p;func_00112364(l,r,&q->node);}
void func_00407D18(Obj407D*p,Item407D*q){append(&p->list,&p->list.root,q,p);++p->count;}
