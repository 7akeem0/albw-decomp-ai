#include "range.h"
struct C{char pad[0x16];u16 flags;};struct S{char pad[0x14];C*child;};extern bool func_005438EC(C*);bool f_558FDC(S*p){if(func_005438EC(p->child)&&(p->child->flags&0x80))return true;return false;}
