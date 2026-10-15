#include "../../range.h"
struct S{u32 word;u32* volatile ptr;};void func_0010AE00(S*p,bool on){if(!p->ptr)return;u32 status;do{u32 old;u32*addr=p->ptr;old=__ldrex(addr);u32 flags=old>>24;if(on)flags|=1;else flags&=~1u;u32 value=(old&0xffffff)|(flags<<24);status=__strex(value,addr);}while(status);}
