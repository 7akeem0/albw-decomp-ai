#include "range.h"
struct Obj4221{u8 pad[0x1c];void*owner;u8 pad20[0xd4-0x20];Ctrl231 ctrl;u8 pade0[3];u8 active;};
void Ctrl231::init(void*p,s16 i,s16 k){owner=p;index=i;kind=k;}
extern "C" void func_002317C0(Ctrl231*,f32);
void func_00422144(Obj4221*p){if(!p->active){p->ctrl.init(p->owner,2,0);func_002317C0(&p->ctrl,1.f);}}
