#include "range.h"
struct Obj{u8 pad[0x10];u32 value; void set(u32 v){value=v;}};struct S{u32 pad;Obj* object;u32 value; bool impl(u32 v,bool b){value=v;object->set(v);return b;}};
bool target(S* p,u32 v){return p->impl(v,true);}
