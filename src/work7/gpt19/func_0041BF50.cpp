#include "range.h"
struct S;
struct C { virtual void a(); virtual void b(); virtual void c(S*,void*,void*); };
struct S { u8 pad[0x80]; C* p80; };
extern "C" void f_0041BF50(S* s,void* a,void* b){s->p80->c(s,a,b);}
