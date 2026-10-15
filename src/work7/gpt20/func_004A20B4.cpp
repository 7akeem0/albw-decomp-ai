#include "ladder_types.h"
struct Input4A20 {u32 value,count;void* data;};
struct O4A20 {char pad0[0x14];u32 first,second,count;void* data;};
extern char bss_007A9254[];
extern "C" void func_004A1D58(O4A20*,bool);
extern "C" void func_004A20B4(O4A20*p,const Input4A20*q){p->first=q->value;p->second=q->value;p->count=q->count;p->data=q->data;if(!p->data)p->data=bss_007A9254;func_004A1D58(p,true);}
