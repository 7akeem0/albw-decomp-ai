#include "range.h"
struct OCB5 {u8 flag;f32 value;};
extern u8 bss_007A8798[];
extern "C" void func_003DDE0C(void*);
extern "C" void func_003DCB58(OCB5*p,f32 f){if(p->flag){p->value=f;func_003DDE0C(bss_007A8798);}}
