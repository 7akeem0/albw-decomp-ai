#include "ladder_types.h"
struct Sub537 {char pad[0x40c];u32 sub;};
struct Object537 {char pad[0x10];Sub537* m10;};
extern void func_00537C14(u32*,int);
void func_00537C00(Object537* p,int n) {func_00537C14(&p->m10->sub,n+18);}
