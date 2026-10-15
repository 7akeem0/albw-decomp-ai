#include "../../range.h"
struct Value{u32 value;};struct Owner{u32 a,b,c;ResourceEntry16<Value>* data;char pad[36];int index;};extern "C" int func_0011EB24(Owner*p){return p->index==-1?0:p->data[p->index].object->value;}
