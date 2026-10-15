#include "range.h"
struct Triple {u32 a,b,c;};
struct Obj {u8 pad[0x2d8];Triple value;};
void f_00323BD8(Obj* p){p->value.a=40;p->value.b=120;p->value.c=30;}
