#include "range.h"
struct S{char pad[0x9c];u8 a;char gap[0x158-0x9d];void*child;char gap2[0x16d-0x15c];s8 b;};extern bool func_00479E9C(void*);bool f_573A00(S*p){if(!p->a&&!p->b&&func_00479E9C(p->child))return true;return false;}
