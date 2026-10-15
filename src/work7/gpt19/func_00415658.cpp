#include "range.h"
struct N {u32 a,b;};
struct C {u32 word;N node;};
struct CS {u8 data[12];};
struct L {u32 count;N root;};
struct S {u8 pad[0x1C4];CS cs;L list;};
extern "C" void func_0010C0C0(CS*);
extern "C" void func_0010C160(CS*);
extern "C" void func_00112364(L*,N*,N*);
struct Lock {CS* cs;Lock(CS* p):cs(p){func_0010C0C0(cs);}~Lock(){func_0010C160(cs);}};
extern "C" void f_00415658(S* s,C* c){Lock l(&s->cs);L* list=&s->list;N* root=&s->list.root;func_00112364(list,root,&c->node);}
