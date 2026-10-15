#include "../../range.h"
struct List{void*first;void*last;u32 count;s32 offset;};struct S{u8 pad[0x3f8];List list;};extern void func_0010F1DC(List*,void*);
void func_0014E640(S*p,void*node){if(!node)return;List*l=&p->list;func_0010F1DC(l,(u8*)node+l->offset);++l->count;}
