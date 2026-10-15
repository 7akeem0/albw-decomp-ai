#include "range.h"
struct Message1507 {char pad[0x20];u16 kind;};
struct Object1507 {char pad[0x39c];u32 sub;};
extern void func_0014D9D8(Object1507*,void*,const Message1507*);
bool target(Object1507*p,const Message1507*m){func_0014D9D8(p,&p->sub,m);if((1u<<(m->kind&31))&0x5f)return true;return false;}
