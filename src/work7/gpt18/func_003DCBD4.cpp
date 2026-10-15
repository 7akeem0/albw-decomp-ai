#include "range.h"
struct Obj3DCB {char pad[0x14];u32 a[2];u32 b[2];};
extern u8 bss_007A8798[];
extern void func_003DDFC8(void*);
void func_003DCBD4(Obj3DCB* p,u32 i,u32 a,u32 b){p->a[i]=a;p->b[i]=b;func_003DDFC8(bss_007A8798);}
