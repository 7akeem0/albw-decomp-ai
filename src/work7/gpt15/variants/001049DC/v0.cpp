#include "../../range.h"
extern "C" void func_001080D4(void*);extern "C" bool func_00104F68();extern "C" void func_00104A2C(s32);struct S{u8 pad10[0x10];u32 state;u8 gap14;u8 flag;u8 pad16[0x38-0x16];u32 member;};extern "C" void func_001049DC(S*p){if(p->state!=3){func_001080D4(&p->member);p->state=3;p->flag=1;return;}if(func_00104F68())func_00104A2C(0);}
