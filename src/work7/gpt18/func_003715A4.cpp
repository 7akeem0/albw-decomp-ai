#include "range.h"
struct Elem3715 {char pad[0x10];f32 speed;};
struct Ctl3715 {char pad[0x14];Elem3715* data;void setSpeed(f32 n){data->speed=n;}};
struct Obj3715 {char pad[0x434];Ctl3715* ctl;};
void func_003715A4(Obj3715* p){p->ctl->setSpeed(1.5f);}
