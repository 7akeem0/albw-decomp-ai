#include "range.h"
struct Obj3E0 {u32 m0; void* m4; void* m8;};
extern "C" bool func_003E0828(void*,void*);
bool func_003E081C(Obj3E0* p,void* x){p->m8=x;return func_003E0828(p->m4,x);}
