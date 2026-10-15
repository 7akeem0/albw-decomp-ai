#include "range.h"
struct Word{u32 v;Word(){}Word(u32 n):v(n){}void inc(){*this=Word(v+1);}void set(u32 n){v=n;}};struct Sub{char pad[0xb4];Word w;};struct O{char pad[0x400];Sub s;};void func_003907DC(O*p){p->s.w.v++;}
