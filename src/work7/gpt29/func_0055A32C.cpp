#include "range.h"
struct Value55A { char pad[8]; f32 end; };
struct Context55A { char pad[0x14]; Value55A* value; };
struct Owner55A { char pad[0x20]; Context55A* context; char pad24[0x48-0x24]; f32 start; };
bool f_0055A32C(Owner55A* p,f32 value){f32 end=p->context->value->end;f32 start=p->start;if(start<value&&end>=value)return true;return false;}
