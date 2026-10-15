#include "range.h"
struct E{char pad[0x10];f32 rate;};struct A{char pad[0xc];s32 count,max;E*data;E&operator[](s32 i){if((u32)i<(u32)count)return data[i];return data[0];}};struct O{char pad[0x430];void*first;A*array;};extern void func_004CF478(void*,bool,u32);void f(O*p){func_004CF478(p->first,true,0);(*p->array)[0].rate=1.0f;}
