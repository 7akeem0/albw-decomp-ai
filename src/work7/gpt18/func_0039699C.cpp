#include "range.h"
struct A{s32 v;A(s32 x):v(x){}bool operator<(const A&a)const{return v<a.v;}};struct C{u8 pad[0xa00];A angle;};struct O{C*child;};extern "C" bool func_0039699C(O*p){return p->child->angle<A(0x40600000);}
