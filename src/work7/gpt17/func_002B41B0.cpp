#include "range.h"
struct Sub { u32 opaque; };
struct Obj { u8 pad[0x8ec]; Sub state; };
extern void func_00662638(Sub*,s32);
extern void func_004FB05C(Obj*);
void f_002B41B0(Obj*p) {func_00662638(&p->state,9);func_004FB05C(p);}
