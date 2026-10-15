#include "range.h"
struct S{u32 pad0,pad4,mask;};struct A{char pad[0x20];u16 index;};
inline bool test(u32 word,u32 n,u32 one){if(word&(one<<(n&31)))return false;return true;}
bool f_54D758(const S*p,const A*a){return test(p->mask,a->index,1);}
