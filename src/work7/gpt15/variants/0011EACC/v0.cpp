#include "../../range.h"
struct Value{u16 value;};struct Owner{u32 a,b,c;ResourceEntry16<Value>* data;int index;};extern "C" int func_0011EACC(Owner*p){return p->index==-1?-4:p->data[p->index].object->value;}
