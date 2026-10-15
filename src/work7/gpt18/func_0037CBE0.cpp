#include "range.h"
struct O{char pad[0x2e0];Flag32 flags;char p2e4[0x3dc-0x2e4];f32 x,y,z;void vertical(f32);};void O::vertical(f32 v){y=v;}void f(O*p){p->flags.set(4);p->x=0;p->z=0;p->vertical(-.1f);}
