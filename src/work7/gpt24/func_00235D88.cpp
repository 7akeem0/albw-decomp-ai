#include "range.h"
struct Message235D88{char pad[0x2c];u8*kind;};
struct Obj235D88{char pad[0x84];void*child;char pad88[0x103-0x88];u8 flag;};
extern bool func_0034C8F0(void*,const void*,Message235D88*);
extern "C" bool target(Obj235D88*p,Message235D88*m){func_0034C8F0(p->child,0,m);if(m->kind&&m->kind[1]==15)p->flag=1;return false;}
