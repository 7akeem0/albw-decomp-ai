#include "range.h"
struct N{u32 a,b;};struct C{u8 pad[0x18];u8 kind;u8 gap[3];N node;};
extern "C" void func_00112364(void*,N*,N*);
struct L{u32 count;N root;void insert(C*);};
 void L::insert(C* c){N*const&head=&root;func_00112364(this,head,(N*)&c->node);}
struct S{u8 pad[0x18];L list18,list24;};
extern "C" void f_00407CB8(S*s,C*c){if(c->kind==2)s->list18.insert(c);else s->list24.insert(c);}
