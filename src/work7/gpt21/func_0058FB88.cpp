#include "range.h"
struct Entry{u16 a,b,c;};
struct S{char pad[0x136];Entry first[20];Entry second[20];};
extern void func_0058FBB8(Entry*,const Entry*);
void f_58FB88(S*p,bool first,u32 index,const Entry* value){if(first)func_0058FBB8(p->first+index,value);else func_0058FBB8(p->second+index,value);}
