#include "range.h"
struct Ctrl {s16 kind,index;u32 frame;void* owner;void init(void*,s16,s16);};
void Ctrl::init(void* o,s16 k,s16 i){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[60];Ctrl ctrl;};
extern void func_002317C0(Ctrl*,f32);
void f_00425BCC(S* p){p->ctrl.init(p->owner,0,0);func_002317C0(&p->ctrl,1.0f);}
