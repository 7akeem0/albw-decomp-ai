#include "range.h"
struct ODF7 {u8 flag;u8 pad[0xb];f32 value[2];};extern u8 bss_007A06F0[];
extern "C" void func_003DEDCC(void*,u32,f32);
extern "C" void func_003DDF70(ODF7*p,u32 i,f32 f){if(p->flag){p->value[i]=f;func_003DEDCC(bss_007A06F0,i,f);}}
