#include "range.h"
struct S;struct F{u8 v;void change(bool on){if(on)v|=16;else v&=0xEF;}};
struct N{u32 a,b;};struct C{u32 v;N node;S*owner;u8 pad[0x34];F flags;};struct S{u8 pad[0x10];u32 list;};
extern "C" void func_00112364(void*,N*,N*);
 void phase(void*list,N*prev,C*b){func_00112364(list,prev,&b->node);}
 u32 change(u32 v,bool on){if(on)v|=16;else v&=0xEF;return v;}
 void fix(C*b){b->flags.v=change(change(b->flags.v,false),true);}
extern "C" void f_003FF8D0(S*s,C*a,C*b){N*prev=&a->node;void*list=&s->list;func_00112364(list,prev,&b->node);b->owner=s;b->flags.v=change(change(b->flags.v,false),true);}
