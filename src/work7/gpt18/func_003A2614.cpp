#include "range.h"
struct A{u32 v;A(u32 n):v(n){}bool operator==(const A&b)const{return v==b.v;}};struct D{u8 pad[8];A value;};struct S{u8 pad[0x14];D*child;};struct C{u8 pad[0x8dc];S*child;};struct O{u8 pad[4];C*child;u8 gap[0x30];u8 flag;};extern "C" void func_003A2614(O*p){if(p->child->child->child->value==A(0x41200000u))p->flag=1;}
