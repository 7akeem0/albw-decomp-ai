#include "../../range.h"
struct Value{u32 value;};struct Owner{u32 a,b,c;ResourceEntry16<Value>* data;char pad[4];int index;};extern "C" int func_0011EC80(Owner*p){return p->index==-1?-1:p->data[p->index].object->value;}
