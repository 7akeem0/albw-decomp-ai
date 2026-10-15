#include "range.h"
struct Service40D {virtual void v0();virtual void v1();virtual void v2();virtual void send(u32,u32);};
struct Obj40D9 {Service40D* service;u8 pad4[8];u32 context;};
void func_0040D9A0(Obj40D9* p,u32 n){if(p->service)p->service->send(p->context,n);}
