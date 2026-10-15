#include "../../range.h"
struct PoolEntry30{union{PoolEntry30*next;void*value;};u16 tag;};
struct PoolCounts30{s32 count,capacity;};
struct EntryPool30{PoolCounts30 counts;PoolEntry30**entries;PoolEntry30*free;u32 reserved;};
PoolEntry30*pop(EntryPool30*p,void*value,u16 tag){PoolEntry30*entry=p->free;if(entry){p->free=entry->next;entry->value=value;entry->tag=tag;}return entry;}
void append(EntryPool30*p,PoolEntry30*entry){PoolCounts30 c=p->counts;if(c.count<c.capacity){p->entries[c.count]=entry;++p->counts.count;}}
PoolEntry30*target(EntryPool30*p,void*value,u16 tag){PoolCounts30 c=p->counts;if(c.count>=c.capacity)return 0;PoolEntry30*entry=pop(p,value,tag);append(p,entry);return entry;}
