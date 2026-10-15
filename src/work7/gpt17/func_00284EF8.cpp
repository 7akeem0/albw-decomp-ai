#include "range.h"
struct Obj {u8 pad[0x9e4];u32 value;u8 p9e8[4];u8 state;};
extern void func_0062149C(Obj*);
void f_00284EF8(Obj* p){func_0062149C(p);p->state=3;p->value=0;}
