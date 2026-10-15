#include "range.h"
extern void func_002317C0(void*,f32);
struct Obj422 {u8 pad[0x1c];void* owner;u8 pad20[0xc8-0x20];Ctrl231 ctrl;};
void Ctrl231::init(void* o,s16 i,s16 k){owner=o;index=i;kind=k;}
void func_004221C8(Obj422* p){p->ctrl.init(p->owner,5,0);func_002317C0(&p->ctrl,1.0f);}
