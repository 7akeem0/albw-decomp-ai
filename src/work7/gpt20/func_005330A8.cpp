#include "ladder_types.h"
struct Sub533 {char pad[0x1c8];void* a[1];};
struct Object533 {char pad[0x2d0];Sub533* m2d0;};
extern void func_005330BC(void*,int);
void func_005330A8(Object533* p,u32 i,int n) {void** a=p->m2d0->a;func_005330BC(a[i],n);}

