#include "range.h"
struct Obj3DCBF{char pad[0x26];u8 value;};
extern u8 bss_007A8798[];
extern "C" void func_003DE058(void*,u8);
void func_003DCBF8(Obj3DCBF*p,u8 x){p->value=x;func_003DE058(bss_007A8798,x);}
