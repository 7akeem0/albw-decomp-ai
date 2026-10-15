#include "range.h"
struct Child { char pad[0x10]; s32 offset; };
struct S { u32 m0,m4; Child* child; };
void* f_5689C4(S* p) { Child* c=p->child; return c ? (char*)c+c->offset : 0; }
