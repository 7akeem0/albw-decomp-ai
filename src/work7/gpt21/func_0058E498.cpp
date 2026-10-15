#include "range.h"
struct Table{u32 header;u32 values[1];};struct S{char pad[0x20c];Table*table;};
u32 f(S*p,u32 i,u32 v){Table*t=p->table;if(!t)return 0;u32 off=4+i*4;u32 old=*(u32*)((char*)t+off);*(u32*)((char*)t+off)=v;return old;}
