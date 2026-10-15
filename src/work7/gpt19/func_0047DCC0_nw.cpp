#include "range.h"
struct S {u8 data[0x9C];};
extern "C" void func_001B6C04(S*);
extern "C" void func_0047DD44(S*);
extern "C" void func_002317C0(void*,f32);
extern "C"  void func_0066E9DC(void*,s32);
extern "C" void f_0047DCC0(S* s){func_001B6C04(s);func_0047DD44(s);func_002317C0(s->data+0x98,1);func_0066E9DC(s->data+0x74,0);}
