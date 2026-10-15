#include "range.h"
struct S { char pad[0x37]; u8 b; u16 pad38; u16 a; };
extern void* data_0070C8E0;
extern u32 func_005822A0(void*,u16,u8);
u32 f_547538(S* p) { return func_005822A0(data_0070C8E0,p->a,p->b); }
