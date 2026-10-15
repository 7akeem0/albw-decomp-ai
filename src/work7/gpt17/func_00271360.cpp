#include "range.h"
struct Obj {u8 pad[0x1c];void*child;u8 pad20[0x3d74-0x20];u32 state;};extern void*data_0070BB18;extern void*data_0070BB80;extern void func_0016A910(void*);extern void func_002700A8(void*);
void f_00271360(Obj*p){p->state=0;p->child=0;func_0016A910(data_0070BB18);func_002700A8(data_0070BB80);}
