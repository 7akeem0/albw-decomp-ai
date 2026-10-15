#include "range.h"
struct Child478 {u8 pad[0xc];u32 id;u8 pad10[6];BitFlag16 flags;};struct Obj478{u8 pad[0x14];Child478*child;};
extern void*data_007142C8;extern "C" void func_00519084(void*);
void func_004788FC(Obj478*p){Child478*first=p->child;first->id=25;Child478*c=p->child;BitFlag16*f=&c->flags;f->set(2);func_00519084(data_007142C8);}
