#include "range.h"
struct Child5847{char pad0[8];s8 value;};struct Owner5847{char pad0[0x51c];Child5847*child;char pad520[0x90];void*alternate;};
extern s32 func_0054875C(void*);
s32 f_00584798(Owner5847*p){Child5847*c=p->child;if(!c)return 0;if(!p->alternate)return c->value;return func_0054875C(p->alternate);}
