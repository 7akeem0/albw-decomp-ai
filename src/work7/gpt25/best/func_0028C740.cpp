#include "../range_types.h"
struct Entry28C7 {Flag32 flags;char pad[0x3c];};
struct Table28C7 {char pad[0xc];Entry28C7*entries;};
struct Child28C7 {char pad[0x24];Table28C7*table;};
struct Obj28C7 {char pad[0x10];Child28C7*child;char gap[0x70];u32 index;};
extern "C" void f_0028C740(Obj28C7*p,bool on){Entry28C7*q=&p->child->table->entries[p->index];u32 v=q->flags.v;if(!on)v&=~0x10;else v|=0x10;q->flags.v=v;}
