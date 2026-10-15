#include "range.h"
struct Child2BF3 {u8 pad[0x10];u32 value;void set(u32 n){value=n;}};
struct Obj2BF3 {u8 pad[0x14];Child2BF3* child;void func_002BF3EC();void f();};
void Obj2BF3::f(){child->set(0);func_002BF3EC();}
