#include "range.h"
struct S {u8 pad[0x30]; u16 kind;};
extern "C" void func_004F8638(S*,s32);
void f_0067206C(S* p){func_004F8638(p,p->kind!=1?-1:18);}

