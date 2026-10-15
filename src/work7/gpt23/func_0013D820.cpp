#include "range.h"
extern "C" void func_0013D820(ActorD7* p) {
    for(s32 i=0;i<3;++i) ((f32*)&p->velocity)[i]=0;
    p->timer.start(4);
}
