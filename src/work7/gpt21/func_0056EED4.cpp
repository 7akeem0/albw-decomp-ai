#include "range.h"
struct S{u32 pad0,tag,value;};
u32* f_56EED4(S*p){if(p->tag!=0x21f)return 0;return &p->value;}
