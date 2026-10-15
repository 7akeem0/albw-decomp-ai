#include "range.h"
struct Four {u8 bytes[4];};
struct S {char pad[0xb4];Four values[8];};
void f_00405120(S* p,u32 i,u8 v){Four* a=p->values;a[i>>2].bytes[i&3]=v;}
