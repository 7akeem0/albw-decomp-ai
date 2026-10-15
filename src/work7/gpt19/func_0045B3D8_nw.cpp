#include "range.h"
struct A{char pad[0xc8];u32 state;};struct S{char pad[0x1e4];A* array[3];char gap[0x24];u32 index;};extern  void func_0066E58C(void*,u32);
void f_0045B3D8(S*p){u32 i=p->index;A**a=p->array;if(i<3)a+=i;func_0066E58C(&(*a)->state,1);}
