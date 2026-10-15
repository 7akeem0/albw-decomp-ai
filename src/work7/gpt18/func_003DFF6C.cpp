#include "range.h"
struct Obj3DF {u32 m0; void* m4; void* m8;};
extern "C" bool func_003DFF78(void*,void*);
bool func_003DFF6C(Obj3DF* p,void* x){p->m8=x;return func_003DFF78(p->m4,x);}
