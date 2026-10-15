#include "range.h"
struct ActiveOwner30{u32 pad0;s32 count;u32 pad8,id;u8 gap10[0x270];u8 active;};
struct TrackedObject30{u8 pad0[0x1c];u32 id;ActiveOwner30*owner;u32 ownerId;u8 pad28[0x14];u32 flags;void activate(u8 value){if(owner&&ownerId==owner->id&&owner->count>0)owner->active=value;}};
struct TrackedHandle30{TrackedObject30*ptr;u32 id;};
struct StateBlock30{u8 opaque[0x24];};
struct TrackedActor30{u8 pad0[0x8bc];StateBlock30 state;u8 pad8e0[0x98c-0x8e0];TrackedHandle30 handle;};
struct ActorHolder30{u32 pad0;TrackedActor30*actor;};
extern "C"  void func_0065D774(StateBlock30*,s32);
void target(ActorHolder30*p){
    TrackedActor30*a=p->actor;TrackedHandle30*h=&a->handle;TrackedObject30*o=h->ptr;
    if(o&&o->id==h->id){o->activate(1);o->flags=(o->flags&~4u)|8u;}
    func_0065D774(&a->state,7);
}
