#include "range.h"
struct BF{u32 v;void change(u32 m,bool b){if(b)v|=m;else v&=~m;}};struct S{char pad[0x59c];BF f;};extern "C" void func_001240F4(S*p){p->f.change(7,true);p->f.change(0xb0,true);}
