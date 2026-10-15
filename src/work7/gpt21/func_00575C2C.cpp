#include "range.h"
struct S {char pad[0x78];u8 kind;char pad79[0xa4-0x79];u32 sub;};
extern bool func_00532C78(void*);
bool f_575C2C(S*p){return p->kind==4&&!func_00532C78(&p->sub);}
