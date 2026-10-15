#include "range.h"
struct S637 { u8 pad[0x3e8]; u32 angle; u8 pad2[0x98c-0x3ec]; u32 savedAngle; };
extern "C" void func_00637F54(S637*);
void f_00637F48(S637* p){p->savedAngle=p->angle;func_00637F54(p);}
