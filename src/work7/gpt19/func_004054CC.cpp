#include "range.h"
struct Four {u8 bytes[4];};
struct S {char pad[0xa8];Four values[8];};
void f_004054CC(S* p,u32 i,u8 v){Four* a=p->values;a[i>>2].bytes[i&3]=v;}
