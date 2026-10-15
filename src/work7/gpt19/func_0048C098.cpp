#include "range.h"
struct Q{u32 words[13];};struct S{u32 a;Q q;};extern bool func_00676478(Q*,void*);extern void func_006763A8(Q*,void*);
bool f_0048C098(S*p,void*a,bool b){if(!b){func_006763A8(&p->q,a);return true;}else return func_00676478(&p->q,a);}
