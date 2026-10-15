#include "range.h"
struct S{char pad[0x81];u8 a,b;};extern bool func_001B6CE4(S*);
bool f_00472B78(S*p){bool r=func_001B6CE4(p);if(p->a || p->b)return false;return r;}
