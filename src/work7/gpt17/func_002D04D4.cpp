#include "range.h"
struct Child2D04 {u8 pad[0x34];u32 value;};
struct Obj2D04 {u8 pad[0x2d0];Child2D04* child;u8 p2d4[0x3ac-0x2d4];u32 value;};
void f_2D04D4(Obj2D04* p){p->value=p->child->value;}
