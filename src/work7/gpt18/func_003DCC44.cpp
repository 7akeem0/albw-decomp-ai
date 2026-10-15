#include "range.h"
struct O{u8 active;char pad[0x4c-1];s32 id;};extern u32 bss_007A8798;extern void func_003DE0EC(void*);void f(O*p){if(p->active){func_003DE0EC(&bss_007A8798);p->id=-1;p->active=0;}}
