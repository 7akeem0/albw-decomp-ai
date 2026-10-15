#include "range.h"
struct S {virtual void a();virtual void b();virtual void c();virtual void d();virtual u32 run(u32,u32,u32,const u8*);};
struct B{u8 v;B(u8);};
 B::B(u8 n):v(n){}
extern "C" u8 f_0040793C(S*s,u32 a,u32 b,u8 flag,u32 arg){B value(flag);return s->run(a,b,arg,&value.v);}
