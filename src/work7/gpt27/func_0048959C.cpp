#include "range.h"
struct Obj4895{u8 pad[0x1c];void*owner;u8 pad20[0x38-0x20];Ctrl231 ctrl;};extern "C" void func_00231448(Ctrl231*);extern "C" void func_002313DC(Ctrl231*);
void Ctrl231::init(void*p,s16 i,s16 k){owner=p;index=i;kind=k;}void func_0048959C(Obj4895*p){func_00231448(&p->ctrl);p->ctrl.init(p->owner,1,0);func_002313DC(&p->ctrl);}
