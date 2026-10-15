#include "range.h"
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_00151148(void*,s32);
extern "C" void func_0013D7E4(ActorD7* p) {
    for(s32 i=0;i<3;++i) ((f32*)&p->velocity)[i]=0;
    func_004CF478(p->model,1,0);
    func_00151148(p->child,1);
}
