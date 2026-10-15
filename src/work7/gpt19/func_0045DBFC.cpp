#include "range.h"
void Ctrl231::init(void*p,s16 i,s16 k){owner=p;index=i;kind=k;}
struct Owner5DBFC {u8 first[0x1C];void* context;u8 gap[0xE0-0x20];Ctrl231 ctrl;};
extern "C" void sub_00231448(Ctrl231*);
extern "C" void sub_002317C0(Ctrl231*,f32);
extern "C" void f_0045DBFC(Owner5DBFC*s){sub_00231448(&s->ctrl);s->ctrl.init(s->context,0,0);sub_002317C0(&s->ctrl,1.f);}
