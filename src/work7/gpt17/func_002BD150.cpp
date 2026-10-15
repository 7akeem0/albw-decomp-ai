#include "range.h"
struct Child{u8 pad[0x2c];u32 flags;void clear(){flags&=~0x100000u;}};
struct Obj{u8 pad[0x424];Child*child;u8 pad428[0x4f4];u32 value;u8 pad920[0x3c];u8 enabled;};
extern void func_004F88A0(Obj*,u32);
void f_002BD150(Obj*p){func_004F88A0(p,p->value);p->enabled=1;p->child->clear();}
