#include "range.h"
struct A {u8 pad[0x20];u16 flags;u16 pad22;u32 word;};
extern "C" bool f_004377EC(void*,const A* a){u32 k=(a->flags&0x7E0)>>5;if(k==17||k==19)return false;if(a->word&0x80)return false;return true;}
