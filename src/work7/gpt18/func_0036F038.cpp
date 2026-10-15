#include "range.h"
struct O{char pad[0x64];u32 word;u8 a,b;s8 mode;u8 reserved;u8 c;};extern void func_0032A2C0(void*,s32,bool);void f(O*p,void*q){p->a=0;p->b=0;p->c=0;func_0032A2C0(q,p->mode,true);p->word=23;}
