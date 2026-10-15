#include "range.h"
struct Flag{u8 value;};
struct Global{u8 pad[0x4be0];Flag flags[1];};
struct Obj{u8 pad[0x16];u8 flag;};
extern Global* data_00711DE8;
void f_00320D50(Obj*p){Flag*f=data_00711DE8->flags;if(f->value)p->flag=1;}
