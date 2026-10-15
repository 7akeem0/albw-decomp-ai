#include "range.h"
struct S { char pad[0x74]; void* ptr; char pad2[0x84-0x78]; u32 flag; };
void* f_5809FC(const S* p) { return p->flag ? p->ptr : 0; }
