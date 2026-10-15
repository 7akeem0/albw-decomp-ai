#include "range.h"
struct Message235D24{char pad[0x2c];u8*kind;};
struct Obj235D24{char pad[0x84];void*child;char pad88[0x102-0x88];u8 flag;};
extern bool func_0034C8F0(void*,const void*,Message235D24*);
extern "C" bool target(Obj235D24*p,Message235D24*m){if(*m->kind==2){func_0034C8F0(p->child,0,m);p->flag=1;}return true;}
