#include "range.h"
struct Q{u32 words[13];};struct S{u32 a;Q q;};
extern bool func_00676328(Q*,u32*);
extern void func_0067660C(Q*,u32*);
bool f_0048C11C(S*p,u32*a,bool b){if(!b){func_0067660C(&p->q,a);return true;}else return func_00676328(&p->q,a);}
