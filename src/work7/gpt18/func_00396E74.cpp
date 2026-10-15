#include "range.h"
struct A{s32 v;A(s32 n):v(n){}bool operator>=(const A&b)const{return v>=b.v;}bool operator>(const A&b)const{return v>b.v;}};struct C{u8 pad[0xa00];A angle;};struct O{C*child;};extern "C" bool func_00396E74(O*p){A v=p->child->angle;return v>=A(0x40600000)&&A(0x40c00000)>v;}
