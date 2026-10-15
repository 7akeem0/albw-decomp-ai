#include "../../work7/gpt19/range.h"
void Ctrl231::init(void*p,s16 i,s16 k){owner=p;index=i;kind=k;}
struct Owner878F8 {u8 data[0x1C];void*context;u8 gap[0x108-0x20];Ctrl231 ctrl;};
extern "C" void sub_00231448(Ctrl231*);
extern "C" void sub_002317C0(Ctrl231*,f32);
extern "C" void f_00487C28(Owner878F8*s){sub_00231448(&s->ctrl);s->ctrl.init(s->context,2,0);sub_002317C0(&s->ctrl,1.f);}
