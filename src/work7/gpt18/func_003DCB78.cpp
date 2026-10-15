#include "range.h"
struct OCB7 {u8 pad[0x14];u32 a[2],b[2];};
extern u8 bss_007A8798[];
extern "C" void func_003DDFC8(void*,u32,unsigned long long);
extern "C" void func_003DCB78(OCB7*p,u32 i){p->a[i]=0;p->b[i]=0;func_003DDFC8(bss_007A8798,i,0);}
