#include "ladder_types.h"
extern u32 data_00716538;
struct O4A6C {u32* m0;char pad4[0x18];u32 m1c,m20;};
void f_004A6C38(O4A6C* p,u32 a,u32 b){p->m1c=a;p->m20=b;p->m0=&data_00716538;}
