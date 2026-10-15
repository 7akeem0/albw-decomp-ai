#include "range.h"
extern void func_00413634(void*);extern void func_00408B7C(void*);
struct Obj408B {u8 pad[0x11c];u32 word;u32 member;};
void func_00408B58(Obj408B* p){p->word=0;func_00413634(&p->member);func_00408B7C(p);}
