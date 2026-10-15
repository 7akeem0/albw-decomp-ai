#include "range.h"
struct Tail{u8 pad[0xcc];u16 a,b;};struct S{u8 pad[0x900];Tail tail;};extern "C" s32 func_005568D4(void*);extern "C" void func_00255AB4(void*,s32);extern void*data_0070FB60;
bool target(S*p,bool b){Tail*t=&p->tail;u16 n=b?t->b:t->a;if(func_005568D4(data_0070FB60)<n)return false;func_00255AB4(data_0070FB60,-(s32)(b?t->b:t->a));return true;}
