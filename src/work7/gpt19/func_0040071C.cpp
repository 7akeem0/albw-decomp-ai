#include "range.h"
struct Base{virtual ~Base();char pad[0xa0];Base(void*,u32);};
struct Zero {u32 v;Zero():v(0){}};
struct S:Base{Zero a,b,c;S(void*,u32,u32);virtual ~S();};S::S(void*p,u32 unused,u32 n):Base(p,n){}
