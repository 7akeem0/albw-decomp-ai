#include "ladder_types.h"
struct Object4B07 {char pad[0xc];void* mc;u32 m10;};
extern void func_004B0730(void*,void*,u32*);
void func_004B071C(Object4B07* p,void* a) {func_004B0730(a,p->mc,&p->m10);}
