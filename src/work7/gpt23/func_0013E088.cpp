#define A1E4_EXTRA bool trySetDead(s32);
#include "../../work4/agent8/actor1e4.h"
#include "range.h"
struct Actor13E : Actor1E4 { char pad4f4[4]; StateMgrSmall state; };
extern "C" void func_0065743C(StateMgrSmall*,s32);
extern "C" bool func_0013E088(Actor13E* p,s32 value) {
    if (!p->trySetDead(value)) return false;
    func_0065743C(&p->state,1);
    return true;
}
