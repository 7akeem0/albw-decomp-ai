#include "range.h"
struct Sub {u8 pad[0xd];u8 a,b;};
struct Obj {u8 pad[0x10];Sub* child;};
bool f_00273ABC(Obj* p){Sub* s=p->child;if(s->a!=3||s->b!=3)return false;return true;}
