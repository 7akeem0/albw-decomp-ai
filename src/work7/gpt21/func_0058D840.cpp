#include "range.h"
struct Child{char pad[0x90];u8 value;};struct S{char pad[0x20];Child*child;};bool f(S*p){Child*c=p->child;if(!c)return false;return c->value==4;}
