#include "range.h"
struct IdPredicate5841 { virtual bool test(void*); s32 id; IdPredicate5841(s32 n):id(n){} };
extern s32 func_0052FD14(void*,const IdPredicate5841&);
s32 f_005841D8(void* p,s32 id){IdPredicate5841 predicate(id);return func_0052FD14((char*)p+0x3dbbc,predicate);}
