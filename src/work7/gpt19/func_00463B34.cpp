#include "range.h"
struct C {virtual void a();virtual void b();virtual void c();virtual void d();virtual void e();virtual void call();};
struct S {u8 pad[0x148];C* child;};
extern void* data_0070B898;
extern "C" void func_00503CA4(void*,s32,C*);
extern "C" void f_00463B34(S* s){func_00503CA4(data_0070B898,1,s->child);s->child->call();}
