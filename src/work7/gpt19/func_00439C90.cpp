#include "range.h"
struct S {char pad[0xcd];u8 flag;};
extern void func_00439E74(S*);
void f_00439C90(S* p){if(!p->flag)func_00439E74(p);}
