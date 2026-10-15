#include "../range_types.h"
struct Value28C4 {char pad[8];f32 value;char gap[0x1a];u8 dirty;};
struct Child28C4 {char pad[0x14];Value28C4*data;};
struct Obj28C4 {char pad[0x18];Child28C4*child;};
extern "C" void func_00169A80(Child28C4*);
extern "C" void f_0028C4CC(Obj28C4*p,f32 v){Value28C4*q=p->child->data;if(q->value!=v){q->value=v;q->dirty=1;}func_00169A80(p->child);}
