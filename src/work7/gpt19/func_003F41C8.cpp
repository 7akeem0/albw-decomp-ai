#include "range.h"
struct A {char pad[0x1c];u32 field;};
extern void func_003F6EC0(void*,void*,A*);
void f_003F41C8(void* p,void* arg,A* a){if(arg&&a->field)func_003F6EC0(p,arg,a);}
