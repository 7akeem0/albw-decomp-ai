#include "ladder_types.h"
struct I {u32 a,b,c;void set(u32 x){b=x;}};
struct O {char pad[0x38];I* items;I* at(u32 n){return &items[n];}};
inline void set(I* p,u32 x){p->b=x;}

void target(O* p,u32 a,u32 i){I* q=&p->items[i];q->b=a;}
