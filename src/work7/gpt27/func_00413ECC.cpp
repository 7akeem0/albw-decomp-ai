#include "range.h"
struct Obj413E {u8 pad[0x20];u16 flags;u8 pad22[0x38-0x22];f32 value;};
void func_00413ECC(Obj413E* p,f32 v){if(p->value!=v){p->value=v;p->flags|=0x10;}}
