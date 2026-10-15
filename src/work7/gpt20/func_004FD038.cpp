#include "ladder_types.h"
struct Child4FD0 {char pad0[0x61];u8 flag;};
struct O4FD0 {char pad0[0x70];Child4FD0* children[14];u16 padA8;u8 count;};
bool more(u32 n,u32 i){return n>i;}
void target(O4FD0*p,u8 value){for(u32 i=0;more(p->count,i);++i)p->children[i]->flag=value;}
