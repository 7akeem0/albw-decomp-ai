#include "range.h"
struct C {u8 pad[0x20];void* resource;};
struct S {u8 pad[0x30B];s8 flag;u8 gap[8];C* child;};
extern "C" void func_004A1B00(void*);
extern "C" void func_0047AE74(S*);
extern "C" void func_0047B5E4(S*);
extern "C" void f_0047B5B0(S* s){s->flag=-1;void* r=s->child->resource;if(r)func_004A1B00(r);func_0047AE74(s);func_0047B5E4(s);}
