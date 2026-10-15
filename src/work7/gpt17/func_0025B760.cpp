#include "range.h"
struct Obj{u8 pad[0x10];void*child;};
extern void func_0014A124(void*);
extern void func_001E05E8(void*);
void f_0025B760(Obj*p){if(p->child){func_0014A124(p->child);func_001E05E8(p->child);}}
