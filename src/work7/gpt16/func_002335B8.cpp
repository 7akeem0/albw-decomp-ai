#include "range.h"
struct E2335{u8 data[0x70];};struct O2335{u8 pad[0x8c];E2335 items[0x30];};extern void func_001B8100(void*);extern void* __aeabi_vec_ctor_nocookie(void*,void(*)(void*),u32,u32);O2335*f2335B8(O2335*p){__aeabi_vec_ctor_nocookie(p->items,func_001B8100,0x70,0x30);return p;}
