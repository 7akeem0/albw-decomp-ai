#include "range.h"
struct A{u32 count,max;void**data;void**begin(){return data;}void**end(){return data+count;}};struct O{char pad[0x3c];A array;};extern void func_00260820(void*);void f(O*p){for(void**i=p->array.begin(),**e=p->array.end();i!=e;++i)func_00260820(*i);}
