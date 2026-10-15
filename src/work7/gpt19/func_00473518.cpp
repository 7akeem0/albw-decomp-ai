#include "range.h"
struct S{char pad[0x160];u8 state,guard;};void f_00473518(S*p){if(!p->guard && (p->state==1 || p->state==2))p->state=3;}
