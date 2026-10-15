#include "range.h"
struct S{char pad[0x74];s32 count;u8 kind;char gap[0x98-0x79];u32 sub;};extern bool func_00532C78(void*);bool f_57B93C(S*p){if(p->kind==3&&p->count>=30&&!func_00532C78(&p->sub))return true;return false;}
