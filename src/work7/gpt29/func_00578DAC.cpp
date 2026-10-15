#include "range.h"
struct Manager578 { char pad0[0x10]; u32 sub; };
struct Owner578 { char pad0[0xd0]; void* child; };
extern Manager578* data_0070B850;
extern void func_004077E4(void*,u32*);
void f_00578DAC(Owner578* p) { if(p->child)func_004077E4(p->child,&data_0070B850->sub); }
