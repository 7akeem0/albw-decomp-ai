#include "../../work7/gpt24/range.h"
struct Base{Base(void*);virtual~Base();char p[0x178-4];};
struct Z1{u32 a;Z1():a(0){}};struct Z2{u32 a,b;Z2():a(0),b(0){}};struct Z3{u32 a,b,c;Z3():a(0),b(0),c(0){}};struct Y3{u32 a,b,c;Y3(){a=0;b=0;c=0;}};struct W2{u32 a,b;W2(){a=0;b=0;}};
struct S:Base{Z3 a;u32 c;Z2 b;S(void*);};
S::S(void*p):Base(p),c(0){}
