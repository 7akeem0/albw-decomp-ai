#include "range.h"
extern void func_002317C0(void*,f32);
struct Obj{u8 pad[28];void* owner;u8 pad2[116];Ctrl231 ctrl;};
void Ctrl231::init(void*o,s16 i,s16 k){owner=o;index=i;kind=k;}
void func_00422978(Obj*p){p->ctrl.init(p->owner,1,0);func_002317C0(&p->ctrl,1.0f);}
