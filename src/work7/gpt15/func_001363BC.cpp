#include "range.h"
struct S{char pad[0x2d7];u8 flag;char pad2d8[0x40c-0x2d8];s32 count;};extern "C" void func_001363BC(S*p){if(p->count>20)p->flag=1;}
