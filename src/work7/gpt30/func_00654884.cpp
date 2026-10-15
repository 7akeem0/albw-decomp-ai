#include "range.h"
extern "C" void func_004FABDC(ActorVelocity30*,s32,s32,s32);
extern "C" void func_0028FCC8(Player30*);
void f_00654884(ActorVelocity30* p) {
    p->velocity.setZero();
    func_004FABDC(p,3,-1,0);
    p->velocity.y=0.3f;
    if(data_0070FB60) func_0028FCC8(data_0070FB60);
}
