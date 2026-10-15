#include "ladder_types.h"
struct Slot4F88 {f32 value;Vec3 position;};
struct Flags4F88 {u8 v;void set(u32 mask){v|=mask;}};
struct O4F88 {char pad0[0x748];Slot4F88 slots[2];Flags4F88 flags;};
u32 bit(u32 i){return 1u<<i;}
void target(O4F88*p,const Vec3&position,u32 index,f32 value){Slot4F88*s=&p->slots[index&1];s->value=value;s->position=position;p->flags.set(bit(index));}
