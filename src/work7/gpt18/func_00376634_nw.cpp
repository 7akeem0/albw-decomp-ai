#include "range.h"
struct C{char pad[0x16];u16 flags;};struct O{char pad[0x14];C*child;};extern bool func_00532C78(void*);extern void func_00667638(void*,s32);void f(O*p){if(!func_00532C78((char*)p+0x5c))func_00667638((char*)p+0x38,(p->child->flags&0x80)?2:3);}
