#include "range.h"
struct Child{char pad[0x74];u8 flags;};struct Manager{char pad[0x130];Child* child;};extern Manager* data_007142C8;
bool f(){if(data_007142C8->child->flags&8)return true;return false;}
