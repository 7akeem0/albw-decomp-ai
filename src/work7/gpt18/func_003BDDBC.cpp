#include "range.h"
struct RDDB {u32 get();u32 below(u32 n){return(u32)(((unsigned long long)get()*n)>>32);}};
struct ODDB {u8 pad[0x48];void*child;u8 gap[0x12];u16 timer;};
extern "C" RDDB*func_0058A7D4(void*);
extern "C" void func_003BDDBC(ODDB*p){p->timer=func_0058A7D4(p->child)->below(11)+30;}
