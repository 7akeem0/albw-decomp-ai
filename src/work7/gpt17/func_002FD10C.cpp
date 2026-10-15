#include "range.h"
struct Child2FD1 {void func_002FD11C(s32);};
struct Mid2FD1 {u8 pad[0x70];Child2FD1* child;};
struct Obj2FD1 {u8 pad[0x14];Mid2FD1* mid;};
void f_2FD10C(Obj2FD1* p){p->mid->child->func_002FD11C(1);}
