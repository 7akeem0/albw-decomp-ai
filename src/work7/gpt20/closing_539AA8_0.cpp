#include "ladder_types.h"
struct O539A{char pad[0x30];u8 b[2];u16 h[1];};extern void*data_0070C8E0;extern void func_004AD9E8(void*,u32,u32,bool);
void f_00539AA8(O539A*p,u32 n,bool on){const u8*b=p->b;const u16*h=p->h;u8 v=b[n];func_004AD9E8(data_0070C8E0,h[n],v,on);}
