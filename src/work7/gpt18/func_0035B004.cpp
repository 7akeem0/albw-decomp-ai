#include "range.h"
struct Elem35B0 {char pad[0x10];f32 speed;};
struct Ctl35B0 {char pad[0x14];Elem35B0* data;void setSpeed(f32 n){data->speed=n;}};
struct Obj35B0 {char pad[0x438];Ctl35B0* ctl;};
void func_0035B004(Obj35B0* p){p->ctl->setSpeed(1.0f);}
