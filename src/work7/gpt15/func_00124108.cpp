#include "range.h"
struct BF{u32 v;void change(u32 m,bool b){if(b)v|=m;else v&=~m;}};struct S{char pad[0x59c];BF f;};extern "C" void func_00124108(S*p){p->f.change(7,false);p->f.change(0x80,false);}
