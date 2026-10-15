#include "range.h"
struct C{u8 pad[0x2e0];u32 flags;void clear(){flags&=~2u;}void set(){flags|=8u;}};struct O{u8 pad[0x48];C*child;};extern "C" void func_003C436C(O*p){p->child->clear();p->child->set();}
