#include "range.h"
struct S{virtual s32 f0();virtual s32 f1();virtual s32 f2();virtual s32 f3();u8 pad[0x30];s32 value;s32 query();};struct P{virtual void f();u8 pad[0x38];};struct O:P,S{};s32 S::query(){return f3();}extern "C" void func_0037BAAC(O*p){S&s=*p;p->value=-1;s.value=s.query();}
