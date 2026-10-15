#include "range.h"
struct S {u8 pad[0x1C];void* owner;u8 gap[0x18];Ctrl231 ctl;};
extern "C" void func_00231448(Ctrl231*);
extern "C" void func_00231524(Ctrl231*);
void Ctrl231::init(void* p,s16 i,s16 k){owner=p;index=i;kind=k;}
extern "C" void f_00489648(S* s){func_00231448(&s->ctl);s->ctl.init(s->owner,1,0);func_00231524(&s->ctl);}
