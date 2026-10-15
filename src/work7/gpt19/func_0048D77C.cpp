#include "range.h"
struct Base{virtual ~Base();char pad[0xfc];s32 a,b;char gap[0x2c];u8 kind;char rest[0x27];Base(void*);};
struct S:Base{S(void*);virtual ~S();};S::S(void*p):Base(p){kind=2;a=-1;b=-1;}
