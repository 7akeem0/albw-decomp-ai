#include "range.h"
struct Message238924{char pad[0x30];u32 kind;};
struct FlagObj238924{char pad[0x2c];u32 flags;void change(u32 mask,bool on){if(on)flags|=mask;else flags&=~mask;}};
struct Link238924{char pad[0x18];FlagObj238924*sub;};
struct Obj238924{char pad[0x7c];Link238924*link;char pad80[0xcc-0x80];void*child;};
extern bool func_0034C8F0(void*,void*,const Message238924*);
extern "C" bool target(Obj238924*p,const Message238924*m){func_0034C8F0(p->child,0,m);if((m->kind>>28)==1)p->link->sub->flags|=16;else p->link->sub->flags&=~16;return false;}
