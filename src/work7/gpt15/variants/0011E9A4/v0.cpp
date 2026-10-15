#include "../../range.h"
struct Elem{u32 first,second,other[2];};struct Obj{u32 count;Elem elements[1];};struct S{u8 padC[12];ResourceEntry16<Obj>*entries;u8 pad10[52-0x10];s32 index;};Elem*element(Obj*o,u32 i,u32 offset){u32 displacement=offset+i*16;return (Elem*)((u32)o+displacement);}u32 func_0011E9A4(S*p,u32 i){if(p->index==-1)return ~0u;Obj*obj=p->entries[p->index].object;if(obj->count<=i)return ~0u;Elem*e=element(obj,i,4);if(e){u32 value=e->other[0];if(value==~0u)value=~10u;return value;}return ~0u;}


