#include "range.h"
extern "C" void func_004FC570(ActorFocus30*);
void f_00654C3C(ActorFocus30* p,s32 kind) {
    if(kind==5)return;
    func_004FC570(p);
    p->timer=150;
    u32* selected=&data_00706E20->focus->selected;
    if(*selected && *selected==p->id) *selected=0;
}
