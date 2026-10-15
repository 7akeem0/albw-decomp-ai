#include "range.h"
struct Arr{char pad[0x18];u32 n;u32*p;u32*get(u32 i){u32 count=n;if(count>i)return p+i;return p;}};struct Obj{char pad[0x7ac0];Arr a;u32*get(u32);};u32*Obj::get(u32 i){return a.get(i);}
