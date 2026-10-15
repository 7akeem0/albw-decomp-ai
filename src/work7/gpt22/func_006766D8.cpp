#include "range.h"
struct Index {s32 v;Index(s32 x):v(x){}};
struct Sub {void next();};
struct S {u8 pad[0x34]; Index index; Sub sub;};
void f_006766D8(S* p){p->index=Index(-1);p->sub.next();}
