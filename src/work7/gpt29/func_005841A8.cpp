#include "range.h"
struct IdPredicate5841 { virtual bool test(void*); s32 id; IdPredicate5841(s32 n):id(n){} };
extern void* func_0052FCA4(void*,const IdPredicate5841&,void*);
void* f_005841A8(void* p,s32 id,void* iterator){IdPredicate5841 predicate(id);return func_0052FCA4((char*)p+0x3dbbc,predicate,iterator);}
