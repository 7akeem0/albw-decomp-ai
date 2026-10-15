#include "range.h"
void Ctrl231::init(void* o,s16 i,s16 k){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[24];Ctrl231 ctrl;};
extern void func_002317C0(Ctrl231*,f32);
void f_0046A140(S* p){p->ctrl.init(p->owner,2,0);func_002317C0(&p->ctrl,1.0f);}
