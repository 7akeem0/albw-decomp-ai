#include "range.h"
struct S { char pad[0x3c]; void* m3C; };
extern u32* func_0056B458(void*);
u32 f_56CAC0(S* p) { return *func_0056B458(p->m3C); }
