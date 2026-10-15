#include "range.h"
struct Child2C42 {u8 pad[0x42];u8 flag;};
struct Obj2C42 {u8 pad[0x24];Child2C42* child;};
void f_2C424C(Obj2C42* p,u8 v){if(p->child)p->child->flag=v;}
