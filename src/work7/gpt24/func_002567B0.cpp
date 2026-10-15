#include "range.h"
struct Base{Base(void*);virtual~Base();char p[0x70-4];};
struct Zeros{u32 a,b;Zeros():a(0),b(0){}};
struct S:Base{Zeros pair;Zeros tail;S(void*);};
S::S(void*p):Base(p){}
