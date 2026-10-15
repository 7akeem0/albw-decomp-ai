// Base callback retains the incoming context parameter although its body only updates the tick.
#include "range.h"
struct Child {virtual void call(void*);};struct Obj {u8 pad[0x18c];Child*child;};extern void func_0049AD40(Obj*,void*);
void f_00322BBC(Obj*p,void*arg){func_0049AD40(p,arg);if(p->child)p->child->call(arg);}
