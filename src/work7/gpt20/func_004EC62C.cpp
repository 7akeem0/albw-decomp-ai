#include "ladder_types.h"
struct O4EC6 {char pad0[0x34];void* a;void* b;char pad3c[0x10];void* c;char pad50[0x2a];u8 flag;};
extern void func_00297318(void*);
extern void func_002570DC(void*,s32);
extern void func_002976EC(void*,s32);
void target(O4EC6*p){func_00297318(p->c);func_002570DC(p->a,30);func_002976EC(p->b,30);p->flag=0;}
