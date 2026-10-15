#include "range.h"
struct C{char pad[0x5c];u32 sub;};struct S{char pad[0x180];u8 kind;char gap[0x1dc-0x181];C*child;char gap2[0x214-0x1e0];s32 value;};extern bool func_00532C78(void*);s32 f_576160(S*p){if(p->kind==8&&!func_00532C78(&p->child->sub))return p->value;return -1;}
