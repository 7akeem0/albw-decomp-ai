#include "range.h"
struct Kind2542 {u8 unused,kind;};
struct Message2542 {char pad[0x2c];Kind2542*kind;};
struct Object2542 {char pad[0x480];u8 flag;};
bool target(Object2542*p,const Message2542*m){if(m->kind&&m->kind->kind==17){p->flag=1;return true;}return false;}
