#include "range.h"
struct CS {u8 pad[12];void lock();void unlock();};
struct Lock {CS* p;Lock(CS* c):p(c){p->lock();}~Lock(){p->unlock();}};
struct S {u32 v;CS cs;u8 data[4];};
extern "C" void* func_0041DCAC(void*);
extern "C" void* f_0041E1C4(S* s){Lock l(&s->cs);return func_0041DCAC(s->data);}
