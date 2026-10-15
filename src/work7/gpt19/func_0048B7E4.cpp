#include "range.h"
struct N {N* prev;N* next;void* data;};
extern "C" void func_0049F6F4(void*);
struct I{N*p;I(N*n):p(n){}bool operator!=(const I&)const;};
 bool I::operator!=(const I&o)const{return p!=o.p;}
struct S{u8 pad[0x1C];N root;};
extern "C" void f_0048B7E4(S*s){I i(s->root.next);while(i!=I(&s->root)){func_0049F6F4(i.p->data);i.p=s->root.next;}}
