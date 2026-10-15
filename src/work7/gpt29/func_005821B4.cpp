#include "range.h"
struct E{char data[0x50c];};struct C{char pad[0x183c];E entries[1];};struct O{char pad[0x38];C*child;};
E*f(O*p,u32 i){C*c=p->child;if(!c)return 0;E*e=c->entries;return e+i;}
