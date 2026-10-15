#include "range.h"
struct Owner53F2{char pad0[0x42];u16 kind;u32 pad44;void*child;};extern s32 func_005594D0(void*);
bool f_0053F268(Owner53F2*p){return p->kind==0x74&&func_005594D0(p->child)!=0;}
