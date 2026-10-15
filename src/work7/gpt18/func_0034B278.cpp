#include "range.h"
struct Obj{char p0[0x8c];u8 flag8c;char p8d[0xb1-0x8d];u8 flagb1;void clear(u8 n);void set(u8 n){flag8c=n;}};
extern "C" void func_0049BD4C(Obj*);
void Obj::clear(u8 n){flagb1=n;}
void func_0034B278(Obj*p){p->clear(0);p->set(1);func_0049BD4C(p);}
