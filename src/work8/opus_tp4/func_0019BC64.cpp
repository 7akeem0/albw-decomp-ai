#include "../../work7/gpt30/range.h"
struct ActiveOwner30{u32 pad0;s32 count;u32 pad8,id;u8 gap10[0x270];u8 active;};
struct TrackedObject30{u8 pad0[0x1c];u32 id;ActiveOwner30*owner;u32 ownerId;u8 pad28[0x14];u32 flags;void activate(u8 value){if(owner&&ownerId==owner->id&&owner->count>0)owner->active=value;}};
struct TrackedHandle30{TrackedObject30*ptr;u32 id;};
struct Self19B{u8 pad0[0x344];void* m344;u8 pad348[0x450-0x348];TrackedHandle30 handle;};
struct EffRet2{u32 a,b;};
extern EffRet2 func_004A1B9C(void*,const char*);
inline void startAnim(void*p,const char*n){if(p)func_004A1B9C(p,n);}
void target(Self19B*a){
    TrackedHandle30*h=&a->handle;TrackedObject30*o=h->ptr;
    if(o&&o->id==h->id){o->activate(1);o->flags=(o->flags&~4u)|8u;}
    startAnim(a->m344,"Go");
}
