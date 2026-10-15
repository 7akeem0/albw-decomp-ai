#include "../../range.h"
struct Owner;
typedef void(Owner::*Method)();
struct S{u32 frame;s8 current;char pad5[0x14-5];Owner* owner;Method* enter;
Method get(s32 i){return enter[i];}
const Method& getRef(s32 i){return enter[i];}
void invoke(Method fn){if(fn)(owner->*fn)();}
void run();};
void f(S*p){if(p->enter[p->current])(p->owner->*p->enter[p->current])();}