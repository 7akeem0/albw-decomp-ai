#include "range.h"
struct Object255B {char pad[0xfb];u8 count;};
struct Manager255B {char pad[0x130];void*list;};
extern Manager255B* data_007142C8;
extern void func_001E337C(void*,void*);
bool target(Object255B*p,void*item){func_001E337C(data_007142C8->list,item);if(p->count<99)++p->count;return true;}
