#include "range.h"
struct S {u8 pad[0x10];void* object;};
extern "C" void func_001080D4(void*);
void f_00676AE8(S* p){func_001080D4(p->object);}
// The range table also includes three separate empty functions at 676AF0/4/8.
