#include "range.h"
struct Owner54C80 {u8 data[0xA0];Ctrl231 ctrl;u8 gap[0xD8-0xAC];u8 ready;};
extern "C" void sub_002317C0(Ctrl231*,f32);
extern "C" void f_00454C80(Owner54C80*s){if(!s->ready){s->ctrl.kind=0;sub_002317C0(&s->ctrl,1.f);s->ready=1;}}
