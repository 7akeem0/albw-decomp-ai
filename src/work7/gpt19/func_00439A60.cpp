#include "range.h"
struct S{u8 pad[0xe];u8 dirty;u8 padF[0x1b4-0xf];u32 m1B4;};
void f_00439A60(S* p,u32 v){p->m1B4=v;p->dirty=1;}
