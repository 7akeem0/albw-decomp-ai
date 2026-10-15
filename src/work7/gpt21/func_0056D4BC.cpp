#include "range.h"
struct S { void* ptr; char pad[0x50-4]; u8 flag; };
u8 f_56D4BC(const S* p) { return p->ptr ? p->flag : 1; }
