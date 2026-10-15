#include "range.h"
extern void func_002317C0(void*,f32);
struct Ctrl{s16 a,b;u32 frame;void* owner;void init(void* owner,s16 a,s16 b);};
struct Obj{u8 pad[0x1c];void* owner;u8 pad20[0x74-0x20];Ctrl ctrl;};
void Ctrl::init(void* o,s16 x,s16 y){owner=o;b=y;a=x;}
void func_004857CC(Obj* p){p->ctrl.init(p->owner,0,0);func_002317C0(&p->ctrl,1.0f);}
